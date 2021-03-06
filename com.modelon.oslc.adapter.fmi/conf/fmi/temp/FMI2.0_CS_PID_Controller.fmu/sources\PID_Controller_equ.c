#include "PID_Controller_base.h"
static char* SimpleController_0_e[] = { "", "P", "PI", "PD", "PID" };
static char* InitPID_1_e[] = { "", "NoInit", "SteadyState", "InitialState", "InitialOutput", "DoNotUse_InitialIntegratorState" };
static char* Init_2_e[] = { "", "NoInit", "SteadyState", "InitialState", "InitialOutput" };
static char* StateSelect_3_e[] = { "", "never", "avoid", "default", "prefer", "always" };








void model_add_blocks(jmi_t** jmi) {



}

int model_ode_derivatives(jmi_t* jmi) {
    int ef = 0;
    model_ode_guards(jmi);
    /********* Initialize reinits *******/
    /************* ODE section *********/
    _spring_tau_c_63 = _spring_c_60 * (_spring_phi_rel_65 - _spring_phi_rel0_62);
    _der_spring_phi_rel_118 = _spring_w_rel_66;
    _spring_tau_d_64 = _spring_d_61 * _der_spring_phi_rel_118;
    _spring_tau_68 = _spring_tau_c_63 + _spring_tau_d_64;
    _der_inertia2_w_111 = jmi_divide_equation(jmi, (- _spring_tau_68 + _loadTorque_tau_84),_inertia2_J_73,"(- spring.tau + loadTorque.tau) / inertia2.J");
    _der_2_inertia2_phi_114 = _der_inertia2_w_111;
    _der_inertia1_phi_117 = _inertia1__der_phi_112;
    _PI_P_u_22 = _PI_addP_k1_19 * _integrator_y_100 + _PI_addP_k2_20 * _der_inertia1_phi_117;
    _PI_P_y_23 = _PI_P_k_21 * _PI_P_u_22;
    _PI_addPID_y_33 = _PI_addPID_k1_30 * _PI_P_y_23 + _PI_addPID_k2_31 * _PI_Dzero_y_83 + _PI_addPID_k3_32 * _PI_I_y_28;
    _PI_addSat_u2_40 = _PI_gainPID_k_29 * _PI_addPID_y_33;
    if (jmi->atInitial || jmi->atEvent) {
        _sw(2) = jmi_turn_switch(_PI_addSat_u2_40 - (_PI_limiter_uMax_43), _sw(2), jmi->events_epsilon, JMI_REL_GT);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(3) = jmi_turn_switch(_PI_addSat_u2_40 - (_PI_limiter_uMin_44), _sw(3), jmi->events_epsilon, JMI_REL_LT);
    }
    _torque_tau_57 = COND_EXP_EQ(LOG_EXP_AND(_atInitial, JMI_TRUE), JMI_TRUE, _PI_addSat_u2_40, (COND_EXP_EQ(_sw(2), JMI_TRUE, _PI_limiter_uMax_43, COND_EXP_EQ(_sw(3), JMI_TRUE, _PI_limiter_uMin_44, _PI_addSat_u2_40))));
    _der_inertia1_w_109 = jmi_divide_equation(jmi, (_torque_tau_57 + _spring_tau_68),_inertia1_J_52,"(torque.tau + spring.tau) / inertia1.J");
    _der_inertia1__der_phi_120 = _der_inertia1_w_109;
    _der_2_spring_phi_rel_113 = _der_2_inertia2_phi_114 + (- _der_inertia1__der_phi_120);
    _der_spring_w_rel_115 = _der_2_spring_phi_rel_113;
    _PI_addSat_y_41 = _PI_addSat_k1_38 * _torque_tau_57 + _PI_addSat_k2_39 * _PI_addSat_u2_40;
    _PI_addI_u3_37 = _PI_gainTrack_k_42 * _PI_addSat_y_41;
    _PI_I_u_27 = _PI_addI_k1_34 * _integrator_y_100 + _PI_addI_k2_35 * _der_inertia1_phi_117 + _PI_addI_k3_36 * _PI_addI_u3_37;
    _der_PI_I_y_116 = _PI_I_k_24 * _PI_I_u_27;
    if (jmi->atInitial || jmi->atEvent) {
        _sw(6) = jmi_turn_switch_time(_time - (_kinematicPTP_startTime_81), _sw(6), JMI_ALMOST_EPS, JMI_REL_LT);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(7) = jmi_turn_switch_time(_time - (_kinematicPTP_Ta1_94 + _kinematicPTP_startTime_81), _sw(7), JMI_ALMOST_EPS, JMI_REL_LT);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(8) = jmi_turn_switch_time(_time - (_kinematicPTP_Te_108 + _kinematicPTP_startTime_81), _sw(8), JMI_ALMOST_EPS, JMI_REL_LT);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(9) = jmi_turn_switch_time(_time - (_kinematicPTP_Ta2_103 + _kinematicPTP_startTime_81), _sw(9), JMI_ALMOST_EPS, JMI_REL_LT);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(10) = jmi_turn_switch_time(_time - (_kinematicPTP_Tv_107 + _kinematicPTP_startTime_81), _sw(10), JMI_ALMOST_EPS, JMI_REL_LT);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(8) = jmi_turn_switch_time(_time - (_kinematicPTP_Te_108 + _kinematicPTP_startTime_81), _sw(8), JMI_ALMOST_EPS, JMI_REL_LT);
    }
    _kinematicPTP_sdd_87 = COND_EXP_EQ(_sw(6), JMI_TRUE, AD_WRAP_LITERAL(0), COND_EXP_EQ(_kinematicPTP_noWphase_106, JMI_TRUE, COND_EXP_EQ(_sw(7), JMI_TRUE, _kinematicPTP_sdd_max_93, COND_EXP_EQ(_sw(8), JMI_TRUE, - _kinematicPTP_sdd_max_93, AD_WRAP_LITERAL(0))), COND_EXP_EQ(_sw(9), JMI_TRUE, _kinematicPTP_sdd_max_93, COND_EXP_EQ(_sw(10), JMI_TRUE, AD_WRAP_LITERAL(0), COND_EXP_EQ(_sw(8), JMI_TRUE, - _kinematicPTP_sdd_max_93, AD_WRAP_LITERAL(0))))));
    _integrator_u_99 = _kinematicPTP_p_deltaq_1_85 * _kinematicPTP_sdd_87;
    _der_integrator_y_119 = _integrator_k_96 * _integrator_u_99;
    /************ Real outputs *********/
    /****Integer and boolean outputs ***/
    /**** Other variables ***/
    _PI_controlError_1 = _integrator_y_100 + (- _der_inertia1_phi_117);
    _PI_u_m_51 = _der_inertia1_phi_117;
    _inertia1_w_55 = _der_inertia1_phi_117;
    _inertia1_a_56 = _der_inertia1_w_109;
    _spring_a_rel_67 = _der_spring_w_rel_115;
    _spring_lossPower_72 = _spring_tau_d_64 * _der_spring_phi_rel_118;
    _inertia2_phi_75 = _spring_phi_rel_65 + _inertia1_phi_54;
    _der_inertia2_phi_110 = _der_spring_phi_rel_118 + _der_inertia1_phi_117;
    _inertia2_w_76 = _der_inertia2_phi_110;
    _inertia2_a_77 = _der_inertia2_w_111;
    if (jmi->atInitial || jmi->atEvent) {
        _sw(0) = jmi_turn_switch(_torque_tau_57 - (AD_WRAP_LITERAL(-12.0)), _sw(0), jmi->events_epsilon, JMI_REL_GEQ);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(1) = jmi_turn_switch(_torque_tau_57 - (AD_WRAP_LITERAL(12.0)), _sw(1), jmi->events_epsilon, JMI_REL_LEQ);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(0) = jmi_turn_switch(_torque_tau_57 - (AD_WRAP_LITERAL(-12.0)), _sw(0), jmi->events_epsilon, JMI_REL_GEQ);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(1) = jmi_turn_switch(_torque_tau_57 - (AD_WRAP_LITERAL(12.0)), _sw(1), jmi->events_epsilon, JMI_REL_LEQ);
    }
    if (LOG_EXP_OR(JMI_FALSE, LOG_EXP_AND(LOG_EXP_AND(JMI_TRUE, _sw(0)), _sw(1))) == JMI_FALSE) {
        JMI_DEF_STR_STAT(tmp_1, 182)
        JMI_INI_STR_STAT(tmp_1)
        snprintf(JMI_STR_END(tmp_1), JMI_STR_LEFT(tmp_1), "%s", "LimPID: During initialization the limits have been switched off.\nAfter initialization, the output y (=");
        snprintf(JMI_STR_END(tmp_1), JMI_STR_LEFT(tmp_1), "%-.*g", (int) 6, _torque_tau_57);
        snprintf(JMI_STR_END(tmp_1), JMI_STR_LEFT(tmp_1), "%s", ") is outside of the limits of yMin (=");
        snprintf(JMI_STR_END(tmp_1), JMI_STR_LEFT(tmp_1), "%s", "-12.0000");
        snprintf(JMI_STR_END(tmp_1), JMI_STR_LEFT(tmp_1), "%s", ") and yMax (=");
        snprintf(JMI_STR_END(tmp_1), JMI_STR_LEFT(tmp_1), "%s", "12.0000");
        snprintf(JMI_STR_END(tmp_1), JMI_STR_LEFT(tmp_1), "%s", ")");
        jmi_assert_failed(tmp_1, JMI_ASSERT_ERROR);
    }
    if (COND_EXP_GE(_PI_limiter_uMax_43, _PI_limiter_uMin_44, JMI_TRUE, JMI_FALSE) == JMI_FALSE) {
        JMI_DEF_STR_STAT(tmp_2, 90)
        JMI_INI_STR_STAT(tmp_2)
        snprintf(JMI_STR_END(tmp_2), JMI_STR_LEFT(tmp_2), "%s", "Limiter: Limits must be consistent. However, uMax (=");
        snprintf(JMI_STR_END(tmp_2), JMI_STR_LEFT(tmp_2), "%-.*g", (int) 6, _PI_limiter_uMax_43);
        snprintf(JMI_STR_END(tmp_2), JMI_STR_LEFT(tmp_2), "%s", ") < uMin (=");
        snprintf(JMI_STR_END(tmp_2), JMI_STR_LEFT(tmp_2), "%-.*g", (int) 6, _PI_limiter_uMin_44);
        snprintf(JMI_STR_END(tmp_2), JMI_STR_LEFT(tmp_2), "%s", ")");
        jmi_assert_failed(tmp_2, JMI_ASSERT_ERROR);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(4) = jmi_turn_switch(_PI_addSat_u2_40 - (_PI_limiter_uMin_44 - AD_WRAP_LITERAL(0.01) * jmi_abs(_PI_limiter_uMin_44)), _sw(4), jmi->events_epsilon, JMI_REL_GEQ);
    }
    if (jmi->atInitial || jmi->atEvent) {
        _sw(5) = jmi_turn_switch(_PI_addSat_u2_40 - (_PI_limiter_uMax_43 + AD_WRAP_LITERAL(0.01) * jmi_abs(_PI_limiter_uMax_43)), _sw(5), jmi->events_epsilon, JMI_REL_LEQ);
    }
    if (LOG_EXP_AND(_atInitial, JMI_TRUE)) {
        if (jmi->atInitial || jmi->atEvent) {
            _sw(4) = jmi_turn_switch(_PI_addSat_u2_40 - (_PI_limiter_uMin_44 - AD_WRAP_LITERAL(0.01) * jmi_abs(_PI_limiter_uMin_44)), _sw(4), jmi->events_epsilon, JMI_REL_GEQ);
        }
        if (jmi->atInitial || jmi->atEvent) {
            _sw(5) = jmi_turn_switch(_PI_addSat_u2_40 - (_PI_limiter_uMax_43 + AD_WRAP_LITERAL(0.01) * jmi_abs(_PI_limiter_uMax_43)), _sw(5), jmi->events_epsilon, JMI_REL_LEQ);
        }
        if (LOG_EXP_AND(_sw(4), _sw(5)) == JMI_FALSE) {
            JMI_DEF_STR_STAT(tmp_3, 201)
            JMI_INI_STR_STAT(tmp_3)
            snprintf(JMI_STR_END(tmp_3), JMI_STR_LEFT(tmp_3), "%s", "Limiter: During initialization the limits have been ignored.\nHowever, the result is that the input u is not within the required limits:\n  u = ");
            snprintf(JMI_STR_END(tmp_3), JMI_STR_LEFT(tmp_3), "%-.*g", (int) 6, _PI_addSat_u2_40);
            snprintf(JMI_STR_END(tmp_3), JMI_STR_LEFT(tmp_3), "%s", ", uMin = ");
            snprintf(JMI_STR_END(tmp_3), JMI_STR_LEFT(tmp_3), "%-.*g", (int) 6, _PI_limiter_uMin_44);
            snprintf(JMI_STR_END(tmp_3), JMI_STR_LEFT(tmp_3), "%s", ", uMax = ");
            snprintf(JMI_STR_END(tmp_3), JMI_STR_LEFT(tmp_3), "%-.*g", (int) 6, _PI_limiter_uMax_43);
            jmi_assert_failed(tmp_3, JMI_ASSERT_ERROR);
        }
    }
    /********* Write back reinits *******/

    return ef;
}

int model_dae_R(jmi_t* jmi, jmi_real_t** res) {
    (*res)[0] = _torque_tau_57 - (AD_WRAP_LITERAL(-12.0));
    (*res)[1] = _torque_tau_57 - (AD_WRAP_LITERAL(12.0));
    (*res)[2] = _PI_addSat_u2_40 - (_PI_limiter_uMax_43);
    (*res)[3] = _PI_addSat_u2_40 - (_PI_limiter_uMin_44);
    (*res)[4] = _PI_addSat_u2_40 - (_PI_limiter_uMin_44 - AD_WRAP_LITERAL(0.01) * jmi_abs(_PI_limiter_uMin_44));
    (*res)[5] = _PI_addSat_u2_40 - (_PI_limiter_uMax_43 + AD_WRAP_LITERAL(0.01) * jmi_abs(_PI_limiter_uMax_43));

    return 0;
}
