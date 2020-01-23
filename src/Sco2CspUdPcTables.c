#include <Python.h>

#include <SAM_Sco2CspUdPcTables.h>
#include <SAM_api.h>

#include "PySAM_utils.h"


/*
 * SystemDesign Group
 */ 

typedef struct {
	PyObject_HEAD
	SAM_Sco2CspUdPcTables   data_ptr;
} SystemDesignObject;

static PyTypeObject SystemDesign_Type;

static PyObject *
SystemDesign_new(SAM_Sco2CspUdPcTables data_ptr)
{
	PyObject* new_obj = SystemDesign_Type.tp_alloc(&SystemDesign_Type,0);

	SystemDesignObject* SystemDesign_obj = (SystemDesignObject*)new_obj;

	SystemDesign_obj->data_ptr = data_ptr;

	return new_obj;
}

/* SystemDesign methods */

static PyObject *
SystemDesign_assign(SystemDesignObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "Sco2CspUdPcTables", "SystemDesign")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
SystemDesign_export(SystemDesignObject *self, PyObject *args)
{
	PyTypeObject* tp = &SystemDesign_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef SystemDesign_methods[] = {
		{"assign",            (PyCFunction)SystemDesign_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``SystemDesign_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)SystemDesign_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
SystemDesign_get_T_amb_des(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_T_amb_des_nget, self->data_ptr);
}

static int
SystemDesign_set_T_amb_des(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_T_amb_des_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_T_htf_hot_des(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_T_htf_hot_des_nget, self->data_ptr);
}

static int
SystemDesign_set_T_htf_hot_des(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_T_htf_hot_des_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_W_dot_net_des(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_W_dot_net_des_nget, self->data_ptr);
}

static int
SystemDesign_set_W_dot_net_des(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_W_dot_net_des_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_dT_PHX_hot_approach(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_dT_PHX_hot_approach_nget, self->data_ptr);
}

static int
SystemDesign_set_dT_PHX_hot_approach(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_dT_PHX_hot_approach_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_dT_mc_approach(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_dT_mc_approach_nget, self->data_ptr);
}

static int
SystemDesign_set_dT_mc_approach(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_dT_mc_approach_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_design_method(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_design_method_nget, self->data_ptr);
}

static int
SystemDesign_set_design_method(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_design_method_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_eta_thermal_des(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_eta_thermal_des_nget, self->data_ptr);
}

static int
SystemDesign_set_eta_thermal_des(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_eta_thermal_des_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_htf(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_htf_nget, self->data_ptr);
}

static int
SystemDesign_set_htf(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_htf_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_htf_props(SystemDesignObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_Sco2CspUdPcTables_SystemDesign_htf_props_mget, self->data_ptr);
}

static int
SystemDesign_set_htf_props(SystemDesignObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_htf_props_mset, self->data_ptr);
}

static PyObject *
SystemDesign_get_site_elevation(SystemDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_SystemDesign_site_elevation_nget, self->data_ptr);
}

static int
SystemDesign_set_site_elevation(SystemDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_SystemDesign_site_elevation_nset, self->data_ptr);
}

static PyGetSetDef SystemDesign_getset[] = {
{"T_amb_des", (getter)SystemDesign_get_T_amb_des,(setter)SystemDesign_set_T_amb_des,
	PyDoc_STR("*float*: Ambient temperature [C]\n\n*Required*: True"),
 	NULL},
{"T_htf_hot_des", (getter)SystemDesign_get_T_htf_hot_des,(setter)SystemDesign_set_T_htf_hot_des,
	PyDoc_STR("*float*: HTF design hot temperature (PHX inlet) [C]\n\n*Required*: True"),
 	NULL},
{"W_dot_net_des", (getter)SystemDesign_get_W_dot_net_des,(setter)SystemDesign_set_W_dot_net_des,
	PyDoc_STR("*float*: Design cycle power output (no cooling parasitics) [MWe]\n\n*Required*: True"),
 	NULL},
{"dT_PHX_hot_approach", (getter)SystemDesign_get_dT_PHX_hot_approach,(setter)SystemDesign_set_dT_PHX_hot_approach,
	PyDoc_STR("*float*: Temp diff btw hot HTF and turbine inlet [C]\n\n*Required*: True"),
 	NULL},
{"dT_mc_approach", (getter)SystemDesign_get_dT_mc_approach,(setter)SystemDesign_set_dT_mc_approach,
	PyDoc_STR("*float*: Temp diff btw ambient air and main compressor inlet [C]\n\n*Required*: True"),
 	NULL},
{"design_method", (getter)SystemDesign_get_design_method,(setter)SystemDesign_set_design_method,
	PyDoc_STR("*float*: 1 = Specify efficiency, 2 = Specify total recup UA, 3 = Specify each recup design\n\n*Required*: True"),
 	NULL},
{"eta_thermal_des", (getter)SystemDesign_get_eta_thermal_des,(setter)SystemDesign_set_eta_thermal_des,
	PyDoc_STR("*float*: Power cycle thermal efficiency\n\n*Required*: True if design_method=1"),
 	NULL},
{"htf", (getter)SystemDesign_get_htf,(setter)SystemDesign_set_htf,
	PyDoc_STR("*float*: Integer code for HTF used in PHX\n\n*Required*: True"),
 	NULL},
{"htf_props", (getter)SystemDesign_get_htf_props,(setter)SystemDesign_set_htf_props,
	PyDoc_STR("*sequence[sequence]*: User defined HTF property data\n\n*Info*: 7 columns (T,Cp,dens,visc,kvisc,cond,h), at least 3 rows\n\n*Required*: If not provided, assumed to be [[0]]"),
 	NULL},
{"site_elevation", (getter)SystemDesign_get_site_elevation,(setter)SystemDesign_set_site_elevation,
	PyDoc_STR("*float*: Site elevation [m]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject SystemDesign_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"Sco2CspUdPcTables.SystemDesign",             /*tp_name*/
		sizeof(SystemDesignObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		SystemDesign_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		SystemDesign_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * HeatExchangerDesign Group
 */ 

typedef struct {
	PyObject_HEAD
	SAM_Sco2CspUdPcTables   data_ptr;
} HeatExchangerDesignObject;

static PyTypeObject HeatExchangerDesign_Type;

static PyObject *
HeatExchangerDesign_new(SAM_Sco2CspUdPcTables data_ptr)
{
	PyObject* new_obj = HeatExchangerDesign_Type.tp_alloc(&HeatExchangerDesign_Type,0);

	HeatExchangerDesignObject* HeatExchangerDesign_obj = (HeatExchangerDesignObject*)new_obj;

	HeatExchangerDesign_obj->data_ptr = data_ptr;

	return new_obj;
}

/* HeatExchangerDesign methods */

static PyObject *
HeatExchangerDesign_assign(HeatExchangerDesignObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "Sco2CspUdPcTables", "HeatExchangerDesign")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
HeatExchangerDesign_export(HeatExchangerDesignObject *self, PyObject *args)
{
	PyTypeObject* tp = &HeatExchangerDesign_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef HeatExchangerDesign_methods[] = {
		{"assign",            (PyCFunction)HeatExchangerDesign_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``HeatExchangerDesign_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)HeatExchangerDesign_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
HeatExchangerDesign_get_HTR_HP_deltaP_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_HP_deltaP_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_HTR_HP_deltaP_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_HP_deltaP_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_HTR_LP_deltaP_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_LP_deltaP_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_HTR_LP_deltaP_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_LP_deltaP_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_HTR_UA_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_UA_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_HTR_UA_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_UA_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_HTR_design_code(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_design_code_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_HTR_design_code(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_design_code_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_HTR_eff_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_eff_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_HTR_eff_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_eff_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_HTR_min_dT_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_min_dT_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_HTR_min_dT_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_HTR_min_dT_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_HT_recup_eff_max(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_HT_recup_eff_max_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_HT_recup_eff_max(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_HT_recup_eff_max_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_LTR_HP_deltaP_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_HP_deltaP_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_LTR_HP_deltaP_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_HP_deltaP_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_LTR_LP_deltaP_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_LP_deltaP_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_LTR_LP_deltaP_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_LP_deltaP_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_LTR_UA_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_UA_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_LTR_UA_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_UA_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_LTR_design_code(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_design_code_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_LTR_design_code(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_design_code_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_LTR_eff_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_eff_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_LTR_eff_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_eff_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_LTR_min_dT_des_in(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_min_dT_des_in_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_LTR_min_dT_des_in(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_LTR_min_dT_des_in_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_LT_recup_eff_max(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_LT_recup_eff_max_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_LT_recup_eff_max(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_LT_recup_eff_max_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_UA_recup_tot_des(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_UA_recup_tot_des_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_UA_recup_tot_des(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_UA_recup_tot_des_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_cycle_config(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_cycle_config_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_cycle_config(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_cycle_config_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_des_objective(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_des_objective_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_des_objective(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_des_objective_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_is_IP_fixed(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_is_IP_fixed_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_is_IP_fixed(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_is_IP_fixed_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_is_PR_fixed(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_is_PR_fixed_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_is_PR_fixed(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_is_PR_fixed_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_is_P_high_fixed(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_is_P_high_fixed_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_is_P_high_fixed(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_is_P_high_fixed_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_is_recomp_ok(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_is_recomp_ok_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_is_recomp_ok(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_is_recomp_ok_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_min_phx_deltaT(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_min_phx_deltaT_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_min_phx_deltaT(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_min_phx_deltaT_nset, self->data_ptr);
}

static PyObject *
HeatExchangerDesign_get_rel_tol(HeatExchangerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_HeatExchangerDesign_rel_tol_nget, self->data_ptr);
}

static int
HeatExchangerDesign_set_rel_tol(HeatExchangerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_HeatExchangerDesign_rel_tol_nset, self->data_ptr);
}

static PyGetSetDef HeatExchangerDesign_getset[] = {
{"HTR_HP_deltaP_des_in", (getter)HeatExchangerDesign_get_HTR_HP_deltaP_des_in,(setter)HeatExchangerDesign_set_HTR_HP_deltaP_des_in,
	PyDoc_STR("*float*: HTR high pressure side pressure drop as fraction of inlet pressure [-]\n\n*Info*: High temperature recuperator"),
 	NULL},
{"HTR_LP_deltaP_des_in", (getter)HeatExchangerDesign_get_HTR_LP_deltaP_des_in,(setter)HeatExchangerDesign_set_HTR_LP_deltaP_des_in,
	PyDoc_STR("*float*: HTR low pressure side pressure drop as fraction of inlet pressure [-]\n\n*Info*: High temperature recuperator"),
 	NULL},
{"HTR_UA_des_in", (getter)HeatExchangerDesign_get_HTR_UA_des_in,(setter)HeatExchangerDesign_set_HTR_UA_des_in,
	PyDoc_STR("*float*: Design HTR conductance [kW/K]\n\n*Info*: High temperature recuperator\n\n*Required*: True if design_method=3"),
 	NULL},
{"HTR_design_code", (getter)HeatExchangerDesign_get_HTR_design_code,(setter)HeatExchangerDesign_set_HTR_design_code,
	PyDoc_STR("*float*: 1 = UA, 2 = min dT, 3 = effectiveness [-]\n\n*Info*: High temperature recuperator\n\n*Required*: True if design_method=3"),
 	NULL},
{"HTR_eff_des_in", (getter)HeatExchangerDesign_get_HTR_eff_des_in,(setter)HeatExchangerDesign_set_HTR_eff_des_in,
	PyDoc_STR("*float*: Design effectiveness for HTR [-]\n\n*Info*: High temperature recuperator\n\n*Required*: True if design_method=3"),
 	NULL},
{"HTR_min_dT_des_in", (getter)HeatExchangerDesign_get_HTR_min_dT_des_in,(setter)HeatExchangerDesign_set_HTR_min_dT_des_in,
	PyDoc_STR("*float*: Design minimum allowable temperature difference in HTR [C]\n\n*Info*: High temperature recuperator\n\n*Required*: True if design_method=3"),
 	NULL},
{"HT_recup_eff_max", (getter)HeatExchangerDesign_get_HT_recup_eff_max,(setter)HeatExchangerDesign_set_HT_recup_eff_max,
	PyDoc_STR("*float*: Maximum allowable effectiveness in HTR [-]\n\n*Info*: High temperature recuperator\n\n*Required*: If not provided, assumed to be 1.0"),
 	NULL},
{"LTR_HP_deltaP_des_in", (getter)HeatExchangerDesign_get_LTR_HP_deltaP_des_in,(setter)HeatExchangerDesign_set_LTR_HP_deltaP_des_in,
	PyDoc_STR("*float*: LTR high pressure side pressure drop as fraction of inlet pressure [-]\n\n*Info*: Low temperature recuperator"),
 	NULL},
{"LTR_LP_deltaP_des_in", (getter)HeatExchangerDesign_get_LTR_LP_deltaP_des_in,(setter)HeatExchangerDesign_set_LTR_LP_deltaP_des_in,
	PyDoc_STR("*float*: LTR low pressure side pressure drop as fraction of inlet pressure [-]\n\n*Info*: Low temperature recuperator"),
 	NULL},
{"LTR_UA_des_in", (getter)HeatExchangerDesign_get_LTR_UA_des_in,(setter)HeatExchangerDesign_set_LTR_UA_des_in,
	PyDoc_STR("*float*: Design LTR conductance [kW/K]\n\n*Info*: Low temperature recuperator\n\n*Required*: True if design_method=3"),
 	NULL},
{"LTR_design_code", (getter)HeatExchangerDesign_get_LTR_design_code,(setter)HeatExchangerDesign_set_LTR_design_code,
	PyDoc_STR("*float*: 1 = UA, 2 = min dT, 3 = effectiveness [-]\n\n*Info*: Low temperature recuperator\n\n*Required*: True if design_method=3"),
 	NULL},
{"LTR_eff_des_in", (getter)HeatExchangerDesign_get_LTR_eff_des_in,(setter)HeatExchangerDesign_set_LTR_eff_des_in,
	PyDoc_STR("*float*: Design effectiveness for LTR [-]\n\n*Info*: Low temperature recuperator\n\n*Required*: True if design_method=3"),
 	NULL},
{"LTR_min_dT_des_in", (getter)HeatExchangerDesign_get_LTR_min_dT_des_in,(setter)HeatExchangerDesign_set_LTR_min_dT_des_in,
	PyDoc_STR("*float*: Design minimum allowable temperature difference in LTR [C]\n\n*Info*: Low temperature recuperator\n\n*Required*: True if design_method=3"),
 	NULL},
{"LT_recup_eff_max", (getter)HeatExchangerDesign_get_LT_recup_eff_max,(setter)HeatExchangerDesign_set_LT_recup_eff_max,
	PyDoc_STR("*float*: Maximum allowable effectiveness in LTR [-]\n\n*Info*: Low temperature recuperator\n\n*Required*: If not provided, assumed to be 1.0"),
 	NULL},
{"UA_recup_tot_des", (getter)HeatExchangerDesign_get_UA_recup_tot_des,(setter)HeatExchangerDesign_set_UA_recup_tot_des,
	PyDoc_STR("*float*: Total recuperator conductance [kW/K]\n\n*Info*: Combined recuperator design\n\n*Required*: True if design_method=2"),
 	NULL},
{"cycle_config", (getter)HeatExchangerDesign_get_cycle_config,(setter)HeatExchangerDesign_set_cycle_config,
	PyDoc_STR("*float*: 1 = recompression, 2 = partial cooling\n\n*Info*: High temperature recuperator\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"des_objective", (getter)HeatExchangerDesign_get_des_objective,(setter)HeatExchangerDesign_set_des_objective,
	PyDoc_STR("*float*: [2] = hit min phx deltat then max eta, [else] max eta\n\n*Info*: High temperature recuperator\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_IP_fixed", (getter)HeatExchangerDesign_get_is_IP_fixed,(setter)HeatExchangerDesign_set_is_IP_fixed,
	PyDoc_STR("*float*: partial cooling config: 0 = No, >0 = fixed HP-IP pressure ratio at input, <0 = fixed IP at abs(input)\n\n*Info*: High temperature recuperator\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_PR_fixed", (getter)HeatExchangerDesign_get_is_PR_fixed,(setter)HeatExchangerDesign_set_is_PR_fixed,
	PyDoc_STR("*float*: 0 = No, >0 = fixed pressure ratio at input <0 = fixed LP at abs(input) [High temperature recuperator]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_P_high_fixed", (getter)HeatExchangerDesign_get_is_P_high_fixed,(setter)HeatExchangerDesign_set_is_P_high_fixed,
	PyDoc_STR("*float*: 1 = Yes (=P_high_limit), 0 = No, optimized (default)\n\n*Info*: High temperature recuperator\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_recomp_ok", (getter)HeatExchangerDesign_get_is_recomp_ok,(setter)HeatExchangerDesign_set_is_recomp_ok,
	PyDoc_STR("*float*: 1 = Yes, 0 = simple cycle only, < 0 = fix f_recomp to abs(input)\n\n*Info*: High temperature recuperator\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"min_phx_deltaT", (getter)HeatExchangerDesign_get_min_phx_deltaT,(setter)HeatExchangerDesign_set_min_phx_deltaT,
	PyDoc_STR("*float*: Minimum design temperature difference across PHX [C]\n\n*Info*: High temperature recuperator\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"rel_tol", (getter)HeatExchangerDesign_get_rel_tol,(setter)HeatExchangerDesign_set_rel_tol,
	PyDoc_STR("*float*: Baseline solver and optimization relative tolerance exponent (10^-rel_tol) [-]\n\n*Info*: High temperature recuperator\n\n*Required*: If not provided, assumed to be 3"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject HeatExchangerDesign_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"Sco2CspUdPcTables.HeatExchangerDesign",             /*tp_name*/
		sizeof(HeatExchangerDesignObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		HeatExchangerDesign_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		HeatExchangerDesign_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * CycleDesign Group
 */ 

typedef struct {
	PyObject_HEAD
	SAM_Sco2CspUdPcTables   data_ptr;
} CycleDesignObject;

static PyTypeObject CycleDesign_Type;

static PyObject *
CycleDesign_new(SAM_Sco2CspUdPcTables data_ptr)
{
	PyObject* new_obj = CycleDesign_Type.tp_alloc(&CycleDesign_Type,0);

	CycleDesignObject* CycleDesign_obj = (CycleDesignObject*)new_obj;

	CycleDesign_obj->data_ptr = data_ptr;

	return new_obj;
}

/* CycleDesign methods */

static PyObject *
CycleDesign_assign(CycleDesignObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "Sco2CspUdPcTables", "CycleDesign")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
CycleDesign_export(CycleDesignObject *self, PyObject *args)
{
	PyTypeObject* tp = &CycleDesign_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef CycleDesign_methods[] = {
		{"assign",            (PyCFunction)CycleDesign_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``CycleDesign_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)CycleDesign_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
CycleDesign_get_PHX_co2_deltaP_des_in(CycleDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_CycleDesign_PHX_co2_deltaP_des_in_nget, self->data_ptr);
}

static int
CycleDesign_set_PHX_co2_deltaP_des_in(CycleDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_CycleDesign_PHX_co2_deltaP_des_in_nset, self->data_ptr);
}

static PyObject *
CycleDesign_get_P_high_limit(CycleDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_CycleDesign_P_high_limit_nget, self->data_ptr);
}

static int
CycleDesign_set_P_high_limit(CycleDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_CycleDesign_P_high_limit_nset, self->data_ptr);
}

static PyObject *
CycleDesign_get_deltaP_counterHX_frac(CycleDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_CycleDesign_deltaP_counterHX_frac_nget, self->data_ptr);
}

static int
CycleDesign_set_deltaP_counterHX_frac(CycleDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_CycleDesign_deltaP_counterHX_frac_nset, self->data_ptr);
}

static PyObject *
CycleDesign_get_eta_isen_mc(CycleDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_CycleDesign_eta_isen_mc_nget, self->data_ptr);
}

static int
CycleDesign_set_eta_isen_mc(CycleDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_CycleDesign_eta_isen_mc_nset, self->data_ptr);
}

static PyObject *
CycleDesign_get_eta_isen_pc(CycleDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_CycleDesign_eta_isen_pc_nget, self->data_ptr);
}

static int
CycleDesign_set_eta_isen_pc(CycleDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_CycleDesign_eta_isen_pc_nset, self->data_ptr);
}

static PyObject *
CycleDesign_get_eta_isen_rc(CycleDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_CycleDesign_eta_isen_rc_nget, self->data_ptr);
}

static int
CycleDesign_set_eta_isen_rc(CycleDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_CycleDesign_eta_isen_rc_nset, self->data_ptr);
}

static PyObject *
CycleDesign_get_eta_isen_t(CycleDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_CycleDesign_eta_isen_t_nget, self->data_ptr);
}

static int
CycleDesign_set_eta_isen_t(CycleDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_CycleDesign_eta_isen_t_nset, self->data_ptr);
}

static PyGetSetDef CycleDesign_getset[] = {
{"PHX_co2_deltaP_des_in", (getter)CycleDesign_get_PHX_co2_deltaP_des_in,(setter)CycleDesign_set_PHX_co2_deltaP_des_in,
	PyDoc_STR("*float*: PHX co2 side pressure drop as fraction of inlet pressure [-]"),
 	NULL},
{"P_high_limit", (getter)CycleDesign_get_P_high_limit,(setter)CycleDesign_set_P_high_limit,
	PyDoc_STR("*float*: High pressure limit in cycle [MPa]\n\n*Required*: True"),
 	NULL},
{"deltaP_counterHX_frac", (getter)CycleDesign_get_deltaP_counterHX_frac,(setter)CycleDesign_set_deltaP_counterHX_frac,
	PyDoc_STR("*float*: Fraction of CO2 inlet pressure that is design point counterflow HX (recups & PHX) pressure drop [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"eta_isen_mc", (getter)CycleDesign_get_eta_isen_mc,(setter)CycleDesign_set_eta_isen_mc,
	PyDoc_STR("*float*: Design main compressor isentropic efficiency [-]\n\n*Required*: True"),
 	NULL},
{"eta_isen_pc", (getter)CycleDesign_get_eta_isen_pc,(setter)CycleDesign_set_eta_isen_pc,
	PyDoc_STR("*float*: Design precompressor isentropic efficiency [-]\n\n*Required*: True if cycle_config=2"),
 	NULL},
{"eta_isen_rc", (getter)CycleDesign_get_eta_isen_rc,(setter)CycleDesign_set_eta_isen_rc,
	PyDoc_STR("*float*: Design re-compressor isentropic efficiency [-]\n\n*Required*: True"),
 	NULL},
{"eta_isen_t", (getter)CycleDesign_get_eta_isen_t,(setter)CycleDesign_set_eta_isen_t,
	PyDoc_STR("*float*: Design turbine isentropic efficiency [-]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject CycleDesign_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"Sco2CspUdPcTables.CycleDesign",             /*tp_name*/
		sizeof(CycleDesignObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		CycleDesign_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		CycleDesign_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * PHXDesign Group
 */ 

typedef struct {
	PyObject_HEAD
	SAM_Sco2CspUdPcTables   data_ptr;
} PHXDesignObject;

static PyTypeObject PHXDesign_Type;

static PyObject *
PHXDesign_new(SAM_Sco2CspUdPcTables data_ptr)
{
	PyObject* new_obj = PHXDesign_Type.tp_alloc(&PHXDesign_Type,0);

	PHXDesignObject* PHXDesign_obj = (PHXDesignObject*)new_obj;

	PHXDesign_obj->data_ptr = data_ptr;

	return new_obj;
}

/* PHXDesign methods */

static PyObject *
PHXDesign_assign(PHXDesignObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "Sco2CspUdPcTables", "PHXDesign")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
PHXDesign_export(PHXDesignObject *self, PyObject *args)
{
	PyTypeObject* tp = &PHXDesign_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef PHXDesign_methods[] = {
		{"assign",            (PyCFunction)PHXDesign_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``PHXDesign_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)PHXDesign_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
PHXDesign_get_dT_PHX_cold_approach(PHXDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_PHXDesign_dT_PHX_cold_approach_nget, self->data_ptr);
}

static int
PHXDesign_set_dT_PHX_cold_approach(PHXDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_PHXDesign_dT_PHX_cold_approach_nset, self->data_ptr);
}

static PyGetSetDef PHXDesign_getset[] = {
{"dT_PHX_cold_approach", (getter)PHXDesign_get_dT_PHX_cold_approach,(setter)PHXDesign_set_dT_PHX_cold_approach,
	PyDoc_STR("*float*: Temp diff btw cold HTF and cold CO2 [C]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject PHXDesign_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"Sco2CspUdPcTables.PHXDesign",             /*tp_name*/
		sizeof(PHXDesignObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		PHXDesign_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		PHXDesign_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * AirCoolerDesign Group
 */ 

typedef struct {
	PyObject_HEAD
	SAM_Sco2CspUdPcTables   data_ptr;
} AirCoolerDesignObject;

static PyTypeObject AirCoolerDesign_Type;

static PyObject *
AirCoolerDesign_new(SAM_Sco2CspUdPcTables data_ptr)
{
	PyObject* new_obj = AirCoolerDesign_Type.tp_alloc(&AirCoolerDesign_Type,0);

	AirCoolerDesignObject* AirCoolerDesign_obj = (AirCoolerDesignObject*)new_obj;

	AirCoolerDesign_obj->data_ptr = data_ptr;

	return new_obj;
}

/* AirCoolerDesign methods */

static PyObject *
AirCoolerDesign_assign(AirCoolerDesignObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "Sco2CspUdPcTables", "AirCoolerDesign")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
AirCoolerDesign_export(AirCoolerDesignObject *self, PyObject *args)
{
	PyTypeObject* tp = &AirCoolerDesign_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef AirCoolerDesign_methods[] = {
		{"assign",            (PyCFunction)AirCoolerDesign_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``AirCoolerDesign_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)AirCoolerDesign_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
AirCoolerDesign_get_deltaP_cooler_frac(AirCoolerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_AirCoolerDesign_deltaP_cooler_frac_nget, self->data_ptr);
}

static int
AirCoolerDesign_set_deltaP_cooler_frac(AirCoolerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_AirCoolerDesign_deltaP_cooler_frac_nset, self->data_ptr);
}

static PyObject *
AirCoolerDesign_get_fan_power_frac(AirCoolerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_AirCoolerDesign_fan_power_frac_nget, self->data_ptr);
}

static int
AirCoolerDesign_set_fan_power_frac(AirCoolerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_AirCoolerDesign_fan_power_frac_nset, self->data_ptr);
}

static PyObject *
AirCoolerDesign_get_is_design_air_cooler(AirCoolerDesignObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_AirCoolerDesign_is_design_air_cooler_nget, self->data_ptr);
}

static int
AirCoolerDesign_set_is_design_air_cooler(AirCoolerDesignObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_AirCoolerDesign_is_design_air_cooler_nset, self->data_ptr);
}

static PyGetSetDef AirCoolerDesign_getset[] = {
{"deltaP_cooler_frac", (getter)AirCoolerDesign_get_deltaP_cooler_frac,(setter)AirCoolerDesign_set_deltaP_cooler_frac,
	PyDoc_STR("*float*: Fraction of CO2 inlet pressure that is design point cooler CO2 pressure drop\n\n*Required*: True"),
 	NULL},
{"fan_power_frac", (getter)AirCoolerDesign_get_fan_power_frac,(setter)AirCoolerDesign_set_fan_power_frac,
	PyDoc_STR("*float*: Fraction of net cycle power consumed by air cooler fan\n\n*Required*: True"),
 	NULL},
{"is_design_air_cooler", (getter)AirCoolerDesign_get_is_design_air_cooler,(setter)AirCoolerDesign_set_is_design_air_cooler,
	PyDoc_STR("*float*: Defaults to True. False will skip air cooler calcs\n\n*Required*: If not provided, assumed to be 1.0"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject AirCoolerDesign_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"Sco2CspUdPcTables.AirCoolerDesign",             /*tp_name*/
		sizeof(AirCoolerDesignObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		AirCoolerDesign_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		AirCoolerDesign_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * Common Group
 */ 

typedef struct {
	PyObject_HEAD
	SAM_Sco2CspUdPcTables   data_ptr;
} CommonObject;

static PyTypeObject Common_Type;

static PyObject *
Common_new(SAM_Sco2CspUdPcTables data_ptr)
{
	PyObject* new_obj = Common_Type.tp_alloc(&Common_Type,0);

	CommonObject* Common_obj = (CommonObject*)new_obj;

	Common_obj->data_ptr = data_ptr;

	return new_obj;
}

/* Common methods */

static PyObject *
Common_assign(CommonObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "Sco2CspUdPcTables", "Common")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
Common_export(CommonObject *self, PyObject *args)
{
	PyTypeObject* tp = &Common_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef Common_methods[] = {
		{"assign",            (PyCFunction)Common_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``Common_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)Common_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
Common_get_T_amb_high(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_T_amb_high_nget, self->data_ptr);
}

static int
Common_set_T_amb_high(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_T_amb_high_nset, self->data_ptr);
}

static PyObject *
Common_get_T_amb_low(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_T_amb_low_nget, self->data_ptr);
}

static int
Common_set_T_amb_low(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_T_amb_low_nset, self->data_ptr);
}

static PyObject *
Common_get_T_htf_hot_high(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_T_htf_hot_high_nget, self->data_ptr);
}

static int
Common_set_T_htf_hot_high(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_T_htf_hot_high_nset, self->data_ptr);
}

static PyObject *
Common_get_T_htf_hot_low(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_T_htf_hot_low_nget, self->data_ptr);
}

static int
Common_set_T_htf_hot_low(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_T_htf_hot_low_nset, self->data_ptr);
}

static PyObject *
Common_get_is_apply_default_htf_mins(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_is_apply_default_htf_mins_nget, self->data_ptr);
}

static int
Common_set_is_apply_default_htf_mins(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_is_apply_default_htf_mins_nset, self->data_ptr);
}

static PyObject *
Common_get_is_generate_udpc(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_is_generate_udpc_nget, self->data_ptr);
}

static int
Common_set_is_generate_udpc(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_is_generate_udpc_nset, self->data_ptr);
}

static PyObject *
Common_get_m_dot_htf_ND_high(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_m_dot_htf_ND_high_nget, self->data_ptr);
}

static int
Common_set_m_dot_htf_ND_high(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_m_dot_htf_ND_high_nset, self->data_ptr);
}

static PyObject *
Common_get_m_dot_htf_ND_low(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_m_dot_htf_ND_low_nget, self->data_ptr);
}

static int
Common_set_m_dot_htf_ND_low(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_m_dot_htf_ND_low_nset, self->data_ptr);
}

static PyObject *
Common_get_n_T_amb(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_n_T_amb_nget, self->data_ptr);
}

static int
Common_set_n_T_amb(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_n_T_amb_nset, self->data_ptr);
}

static PyObject *
Common_get_n_T_htf_hot(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_n_T_htf_hot_nget, self->data_ptr);
}

static int
Common_set_n_T_htf_hot(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_n_T_htf_hot_nset, self->data_ptr);
}

static PyObject *
Common_get_n_m_dot_htf_ND(CommonObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Common_n_m_dot_htf_ND_nget, self->data_ptr);
}

static int
Common_set_n_m_dot_htf_ND(CommonObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_Sco2CspUdPcTables_Common_n_m_dot_htf_ND_nset, self->data_ptr);
}

static PyGetSetDef Common_getset[] = {
{"T_amb_high", (getter)Common_get_T_amb_high,(setter)Common_set_T_amb_high,
	PyDoc_STR("*float*: Upper level of ambient temperature [C]"),
 	NULL},
{"T_amb_low", (getter)Common_get_T_amb_low,(setter)Common_set_T_amb_low,
	PyDoc_STR("*float*: Lower level of ambient temperature [C]"),
 	NULL},
{"T_htf_hot_high", (getter)Common_get_T_htf_hot_high,(setter)Common_set_T_htf_hot_high,
	PyDoc_STR("*float*: Upper level of HTF hot temperature [C]"),
 	NULL},
{"T_htf_hot_low", (getter)Common_get_T_htf_hot_low,(setter)Common_set_T_htf_hot_low,
	PyDoc_STR("*float*: Lower level of HTF hot temperature [C]"),
 	NULL},
{"is_apply_default_htf_mins", (getter)Common_get_is_apply_default_htf_mins,(setter)Common_set_is_apply_default_htf_mins,
	PyDoc_STR("*float*: 1 = yes (0.5 rc, 0.7 simple), 0 = no, only use 'm_dot_htf_ND_low'\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"is_generate_udpc", (getter)Common_get_is_generate_udpc,(setter)Common_set_is_generate_udpc,
	PyDoc_STR("*float*: 1 = generate udpc tables, 0 = only calculate design point cyle\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"m_dot_htf_ND_high", (getter)Common_get_m_dot_htf_ND_high,(setter)Common_set_m_dot_htf_ND_high,
	PyDoc_STR("*float*: Upper level of normalized HTF mass flow rate"),
 	NULL},
{"m_dot_htf_ND_low", (getter)Common_get_m_dot_htf_ND_low,(setter)Common_set_m_dot_htf_ND_low,
	PyDoc_STR("*float*: Lower level of normalized HTF mass flow rate"),
 	NULL},
{"n_T_amb", (getter)Common_get_n_T_amb,(setter)Common_set_n_T_amb,
	PyDoc_STR("*float*: Number of ambient temperature parametric runs"),
 	NULL},
{"n_T_htf_hot", (getter)Common_get_n_T_htf_hot,(setter)Common_set_n_T_htf_hot,
	PyDoc_STR("*float*: Number of HTF hot temperature parametric runs"),
 	NULL},
{"n_m_dot_htf_ND", (getter)Common_get_n_m_dot_htf_ND,(setter)Common_set_n_m_dot_htf_ND,
	PyDoc_STR("*float*: Number of normalized HTF mass flow rate parametric runs"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject Common_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"Sco2CspUdPcTables.Common",             /*tp_name*/
		sizeof(CommonObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		Common_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		Common_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * Outputs Group
 */ 

typedef struct {
	PyObject_HEAD
	SAM_Sco2CspUdPcTables   data_ptr;
} OutputsObject;

static PyTypeObject Outputs_Type;

static PyObject *
Outputs_new(SAM_Sco2CspUdPcTables data_ptr)
{
	PyObject* new_obj = Outputs_Type.tp_alloc(&Outputs_Type,0);

	OutputsObject* Outputs_obj = (OutputsObject*)new_obj;

	Outputs_obj->data_ptr = data_ptr;

	return new_obj;
}

/* Outputs methods */

static PyObject *
Outputs_assign(OutputsObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "Sco2CspUdPcTables", "Outputs")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
Outputs_export(OutputsObject *self, PyObject *args)
{
	PyTypeObject* tp = &Outputs_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef Outputs_methods[] = {
		{"assign",            (PyCFunction)Outputs_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``Outputs_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)Outputs_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
Outputs_get_HTR_HP_T_in_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_HTR_HP_T_in_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_HTR_HP_deltaP_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_HTR_HP_deltaP_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_HTR_LP_T_out_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_HTR_LP_T_out_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_HTR_LP_deltaP_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_HTR_LP_deltaP_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_HTR_UA_assigned(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_HTR_UA_assigned_nget, self->data_ptr);
}

static PyObject *
Outputs_get_HTR_UA_calculated(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_HTR_UA_calculated_nget, self->data_ptr);
}

static PyObject *
Outputs_get_HTR_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_HTR_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_HTR_min_dT(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_HTR_min_dT_nget, self->data_ptr);
}

static PyObject *
Outputs_get_IP_cooler_P_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_IP_cooler_P_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_IP_cooler_T_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_IP_cooler_T_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_IP_cooler_UA(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_IP_cooler_UA_nget, self->data_ptr);
}

static PyObject *
Outputs_get_IP_cooler_W_dot_fan(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_IP_cooler_W_dot_fan_nget, self->data_ptr);
}

static PyObject *
Outputs_get_IP_cooler_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_IP_cooler_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_IP_cooler_m_dot_co2(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_IP_cooler_m_dot_co2_nget, self->data_ptr);
}

static PyObject *
Outputs_get_IP_cooler_q_dot(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_IP_cooler_q_dot_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_P_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_P_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_T_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_T_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_UA(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_UA_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_W_dot_fan(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_W_dot_fan_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_co2_deltaP_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_co2_deltaP_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_in_isen_deltah_to_P_mc_out(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_in_isen_deltah_to_P_mc_out_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_m_dot_co2(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_m_dot_co2_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_q_dot(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_q_dot_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LP_cooler_rho_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LP_cooler_rho_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LTR_HP_T_out_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LTR_HP_T_out_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LTR_HP_deltaP_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LTR_HP_deltaP_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LTR_LP_deltaP_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LTR_LP_deltaP_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LTR_UA_assigned(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LTR_UA_assigned_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LTR_UA_calculated(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LTR_UA_calculated_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LTR_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LTR_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_LTR_min_dT(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_LTR_min_dT_nget, self->data_ptr);
}

static PyObject *
Outputs_get_NTU_HTR(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_NTU_HTR_nget, self->data_ptr);
}

static PyObject *
Outputs_get_NTU_LTR(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_NTU_LTR_nget, self->data_ptr);
}

static PyObject *
Outputs_get_NTU_PHX(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_NTU_PHX_nget, self->data_ptr);
}

static PyObject *
Outputs_get_PHX_co2_deltaP_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_PHX_co2_deltaP_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_PHX_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_PHX_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_P_co2_PHX_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_P_co2_PHX_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_P_comp_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_P_comp_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_P_comp_out(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_P_comp_out_nget, self->data_ptr);
}

static PyObject *
Outputs_get_P_mc_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_P_mc_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_pc_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_P_pc_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_rc_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_P_rc_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_state_points(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_P_state_points_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_t_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_P_t_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_HTR_HP_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_T_HTR_HP_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_HTR_LP_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_T_HTR_LP_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_LTR_HP_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_T_LTR_HP_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_LTR_LP_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_T_LTR_LP_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_PHX_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_T_PHX_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_amb_ind(OutputsObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_Sco2CspUdPcTables_Outputs_T_amb_ind_mget, self->data_ptr);
}

static PyObject *
Outputs_get_T_co2_PHX_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_T_co2_PHX_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_T_comp_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_T_comp_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_T_htf_cold_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_T_htf_cold_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_T_htf_ind(OutputsObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_Sco2CspUdPcTables_Outputs_T_htf_ind_mget, self->data_ptr);
}

static PyObject *
Outputs_get_T_main_cooler_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_T_main_cooler_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_pre_cooler_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_T_pre_cooler_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_state_points(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_T_state_points_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_turb_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_T_turb_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_UA_PHX(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_UA_PHX_nget, self->data_ptr);
}

static PyObject *
Outputs_get_c_tot_W_dot(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_c_tot_W_dot_nget, self->data_ptr);
}

static PyObject *
Outputs_get_c_tot_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_c_tot_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_cooler_tot_UA(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_cooler_tot_UA_nget, self->data_ptr);
}

static PyObject *
Outputs_get_cooler_tot_W_dot_fan(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_cooler_tot_W_dot_fan_nget, self->data_ptr);
}

static PyObject *
Outputs_get_cooler_tot_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_cooler_tot_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_cycle_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_cycle_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_cycle_spec_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_cycle_spec_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_cycle_spec_cost_thermal(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_cycle_spec_cost_thermal_nget, self->data_ptr);
}

static PyObject *
Outputs_get_deltaT_HTF_PHX(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_deltaT_HTF_PHX_nget, self->data_ptr);
}

static PyObject *
Outputs_get_eff_HTR(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_eff_HTR_nget, self->data_ptr);
}

static PyObject *
Outputs_get_eff_LTR(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_eff_LTR_nget, self->data_ptr);
}

static PyObject *
Outputs_get_eff_PHX(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_eff_PHX_nget, self->data_ptr);
}

static PyObject *
Outputs_get_eta_thermal_calc(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_eta_thermal_calc_nget, self->data_ptr);
}

static PyObject *
Outputs_get_h_mc_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_h_mc_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_h_pc_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_h_pc_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_h_rc_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_h_rc_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_h_state_points(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_h_state_points_aget, self->data_ptr);
}

static PyObject *
Outputs_get_h_t_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_h_t_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_co2_full(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_m_dot_co2_full_nget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_htf_ND_ind(OutputsObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_Sco2CspUdPcTables_Outputs_m_dot_htf_ND_ind_mget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_htf_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_m_dot_htf_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_D(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_mc_D_aget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_N_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_N_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_T_out(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_T_out_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_W_dot(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_W_dot_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_eta_stages_des(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_mc_eta_stages_des_aget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_ideal_spec_work(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_ideal_spec_work_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_m_dot_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_m_dot_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_n_stages(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_n_stages_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_phi_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_phi_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_phi_surge(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_phi_surge_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_psi_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_psi_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_psi_max_at_N_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_psi_max_at_N_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_rho_in(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_mc_rho_in_nget, self->data_ptr);
}

static PyObject *
Outputs_get_mc_tip_ratio_des(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_mc_tip_ratio_des_aget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_D(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_pc_D_aget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_N_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_N_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_P_in_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_P_in_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_T_in_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_T_in_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_W_dot(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_W_dot_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_eta_stages_des(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_pc_eta_stages_des_aget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_ideal_spec_work_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_ideal_spec_work_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_m_dot_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_m_dot_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_n_stages(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_n_stages_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_phi_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_phi_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_phi_surge(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_phi_surge_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_rho_in_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_pc_rho_in_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_pc_tip_ratio_des(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_pc_tip_ratio_des_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_HTR(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_q_dot_HTR_nget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_LTR(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_q_dot_LTR_nget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_PHX(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_q_dot_PHX_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_D(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_rc_D_aget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_N_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_N_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_P_in_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_P_in_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_P_out_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_P_out_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_T_in_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_T_in_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_T_out_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_T_out_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_W_dot(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_W_dot_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_eta_stages_des(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_rc_eta_stages_des_aget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_m_dot_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_m_dot_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_n_stages(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_n_stages_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_phi_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_phi_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_phi_surge(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_phi_surge_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_psi_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_psi_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_psi_max_at_N_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_rc_psi_max_at_N_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_rc_tip_ratio_des(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_rc_tip_ratio_des_aget, self->data_ptr);
}

static PyObject *
Outputs_get_recomp_frac(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_recomp_frac_nget, self->data_ptr);
}

static PyObject *
Outputs_get_recup_LTR_UA_frac(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_recup_LTR_UA_frac_nget, self->data_ptr);
}

static PyObject *
Outputs_get_recup_total_UA_assigned(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_recup_total_UA_assigned_nget, self->data_ptr);
}

static PyObject *
Outputs_get_recup_total_UA_calculated(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_recup_total_UA_calculated_nget, self->data_ptr);
}

static PyObject *
Outputs_get_recup_total_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_recup_total_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_s_HTR_HP_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_s_HTR_HP_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_s_HTR_LP_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_s_HTR_LP_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_s_LTR_HP_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_s_LTR_HP_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_s_LTR_LP_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_s_LTR_LP_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_s_PHX_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_s_PHX_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_s_main_cooler_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_s_main_cooler_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_s_pre_cooler_data(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_s_pre_cooler_data_aget, self->data_ptr);
}

static PyObject *
Outputs_get_s_state_points(OutputsObject *self, void *closure)
{
	return PySAM_array_getter(SAM_Sco2CspUdPcTables_Outputs_s_state_points_aget, self->data_ptr);
}

static PyObject *
Outputs_get_t_D(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_D_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_N_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_N_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_P_in_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_P_in_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_P_out_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_P_out_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_T_out_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_T_out_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_W_dot(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_W_dot_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_cost(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_m_dot_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_m_dot_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_nu_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_nu_des_nget, self->data_ptr);
}

static PyObject *
Outputs_get_t_tip_ratio_des(OutputsObject *self, void *closure)
{
	return PySAM_double_getter(SAM_Sco2CspUdPcTables_Outputs_t_tip_ratio_des_nget, self->data_ptr);
}

static PyGetSetDef Outputs_getset[] = {
{"HTR_HP_T_in_des", (getter)Outputs_get_HTR_HP_T_in_des,(setter)0,
	PyDoc_STR("*float*: High temp recuperator HP inlet temperature [C]"),
 	NULL},
{"HTR_HP_deltaP_des", (getter)Outputs_get_HTR_HP_deltaP_des,(setter)0,
	PyDoc_STR("*float*: High temp recuperator high pressure design pressure drop [-]"),
 	NULL},
{"HTR_LP_T_out_des", (getter)Outputs_get_HTR_LP_T_out_des,(setter)0,
	PyDoc_STR("*float*: High temp recuperator LP outlet temperature [C]"),
 	NULL},
{"HTR_LP_deltaP_des", (getter)Outputs_get_HTR_LP_deltaP_des,(setter)0,
	PyDoc_STR("*float*: High temp recuperator low pressure design pressure drop [-]"),
 	NULL},
{"HTR_UA_assigned", (getter)Outputs_get_HTR_UA_assigned,(setter)0,
	PyDoc_STR("*float*: High temp recuperator UA assigned from total [MW/K]"),
 	NULL},
{"HTR_UA_calculated", (getter)Outputs_get_HTR_UA_calculated,(setter)0,
	PyDoc_STR("*float*: High temp recuperator UA calculated considering max eff and/or min temp diff parameter [MW/K]"),
 	NULL},
{"HTR_cost", (getter)Outputs_get_HTR_cost,(setter)0,
	PyDoc_STR("*float*: High temp recuperator cost [M$]"),
 	NULL},
{"HTR_min_dT", (getter)Outputs_get_HTR_min_dT,(setter)0,
	PyDoc_STR("*float*: High temp recuperator min temperature difference [C]"),
 	NULL},
{"IP_cooler_P_in", (getter)Outputs_get_IP_cooler_P_in,(setter)0,
	PyDoc_STR("*float*: Intermediate pressure cross flow cooler inlet pressure [MPa]"),
 	NULL},
{"IP_cooler_T_in", (getter)Outputs_get_IP_cooler_T_in,(setter)0,
	PyDoc_STR("*float*: Intermediate pressure cross flow cooler inlet temperature [C]"),
 	NULL},
{"IP_cooler_UA", (getter)Outputs_get_IP_cooler_UA,(setter)0,
	PyDoc_STR("*float*: Intermediate pressure cross flow cooler conductance [MW/K]"),
 	NULL},
{"IP_cooler_W_dot_fan", (getter)Outputs_get_IP_cooler_W_dot_fan,(setter)0,
	PyDoc_STR("*float*: Intermediate pressure cooler fan power [MWe]"),
 	NULL},
{"IP_cooler_cost", (getter)Outputs_get_IP_cooler_cost,(setter)0,
	PyDoc_STR("*float*: Intermediate pressure cooler cost [M$]"),
 	NULL},
{"IP_cooler_m_dot_co2", (getter)Outputs_get_IP_cooler_m_dot_co2,(setter)0,
	PyDoc_STR("*float*: Intermediate pressure cross flow cooler CO2 mass flow rate [kg/s]"),
 	NULL},
{"IP_cooler_q_dot", (getter)Outputs_get_IP_cooler_q_dot,(setter)0,
	PyDoc_STR("*float*: Intermediate pressure cooler heat transfer [MWt]"),
 	NULL},
{"LP_cooler_P_in", (getter)Outputs_get_LP_cooler_P_in,(setter)0,
	PyDoc_STR("*float*: Low pressure cross flow cooler inlet pressure [MPa]"),
 	NULL},
{"LP_cooler_T_in", (getter)Outputs_get_LP_cooler_T_in,(setter)0,
	PyDoc_STR("*float*: Low pressure cross flow cooler inlet temperature [C]"),
 	NULL},
{"LP_cooler_UA", (getter)Outputs_get_LP_cooler_UA,(setter)0,
	PyDoc_STR("*float*: Low pressure cross flow cooler conductance [MW/K]"),
 	NULL},
{"LP_cooler_W_dot_fan", (getter)Outputs_get_LP_cooler_W_dot_fan,(setter)0,
	PyDoc_STR("*float*: Low pressure cooler fan power [MWe]"),
 	NULL},
{"LP_cooler_co2_deltaP_des", (getter)Outputs_get_LP_cooler_co2_deltaP_des,(setter)0,
	PyDoc_STR("*float*: Low pressure cooler co2 side design pressure drop [-]"),
 	NULL},
{"LP_cooler_cost", (getter)Outputs_get_LP_cooler_cost,(setter)0,
	PyDoc_STR("*float*: Low pressure cooler cost [M$]"),
 	NULL},
{"LP_cooler_in_isen_deltah_to_P_mc_out", (getter)Outputs_get_LP_cooler_in_isen_deltah_to_P_mc_out,(setter)0,
	PyDoc_STR("*float*: Low pressure cross flow cooler inlet isen enthalpy rise to mc outlet pressure [kJ/kg]"),
 	NULL},
{"LP_cooler_m_dot_co2", (getter)Outputs_get_LP_cooler_m_dot_co2,(setter)0,
	PyDoc_STR("*float*: Low pressure cross flow cooler CO2 mass flow rate [kg/s]"),
 	NULL},
{"LP_cooler_q_dot", (getter)Outputs_get_LP_cooler_q_dot,(setter)0,
	PyDoc_STR("*float*: Low pressure cooler heat transfer [MWt]"),
 	NULL},
{"LP_cooler_rho_in", (getter)Outputs_get_LP_cooler_rho_in,(setter)0,
	PyDoc_STR("*float*: Low pressure cross flow cooler inlet density [kg/m3]"),
 	NULL},
{"LTR_HP_T_out_des", (getter)Outputs_get_LTR_HP_T_out_des,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator HP outlet temperature [C]"),
 	NULL},
{"LTR_HP_deltaP_des", (getter)Outputs_get_LTR_HP_deltaP_des,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator high pressure design pressure drop [-]"),
 	NULL},
{"LTR_LP_deltaP_des", (getter)Outputs_get_LTR_LP_deltaP_des,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator low pressure design pressure drop [-]"),
 	NULL},
{"LTR_UA_assigned", (getter)Outputs_get_LTR_UA_assigned,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator UA assigned from total [MW/K]"),
 	NULL},
{"LTR_UA_calculated", (getter)Outputs_get_LTR_UA_calculated,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator UA calculated considering max eff and/or min temp diff parameter [MW/K]"),
 	NULL},
{"LTR_cost", (getter)Outputs_get_LTR_cost,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator cost [M$]"),
 	NULL},
{"LTR_min_dT", (getter)Outputs_get_LTR_min_dT,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator min temperature difference [C]"),
 	NULL},
{"NTU_HTR", (getter)Outputs_get_NTU_HTR,(setter)0,
	PyDoc_STR("*float*: High temp recuperator NTRU"),
 	NULL},
{"NTU_LTR", (getter)Outputs_get_NTU_LTR,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator NTU"),
 	NULL},
{"NTU_PHX", (getter)Outputs_get_NTU_PHX,(setter)0,
	PyDoc_STR("*float*: PHX NTU"),
 	NULL},
{"PHX_co2_deltaP_des", (getter)Outputs_get_PHX_co2_deltaP_des,(setter)0,
	PyDoc_STR("*float*: PHX co2 side design pressure drop [-]"),
 	NULL},
{"PHX_cost", (getter)Outputs_get_PHX_cost,(setter)0,
	PyDoc_STR("*float*: PHX cost [M$]"),
 	NULL},
{"P_co2_PHX_in", (getter)Outputs_get_P_co2_PHX_in,(setter)0,
	PyDoc_STR("*float*: CO2 pressure at PHX inlet [MPa]"),
 	NULL},
{"P_comp_in", (getter)Outputs_get_P_comp_in,(setter)0,
	PyDoc_STR("*float*: Compressor inlet pressure [MPa]"),
 	NULL},
{"P_comp_out", (getter)Outputs_get_P_comp_out,(setter)0,
	PyDoc_STR("*float*: Compressor outlet pressure [MPa]"),
 	NULL},
{"P_mc_data", (getter)Outputs_get_P_mc_data,(setter)0,
	PyDoc_STR("*sequence*: Pressure points along main compression [MPa]"),
 	NULL},
{"P_pc_data", (getter)Outputs_get_P_pc_data,(setter)0,
	PyDoc_STR("*sequence*: Pressure points along pre compression [MPa]"),
 	NULL},
{"P_rc_data", (getter)Outputs_get_P_rc_data,(setter)0,
	PyDoc_STR("*sequence*: Pressure points along re compression [MPa]"),
 	NULL},
{"P_state_points", (getter)Outputs_get_P_state_points,(setter)0,
	PyDoc_STR("*sequence*: Cycle pressure state points [MPa]"),
 	NULL},
{"P_t_data", (getter)Outputs_get_P_t_data,(setter)0,
	PyDoc_STR("*sequence*: Pressure points along turbine expansion [MPa]"),
 	NULL},
{"T_HTR_HP_data", (getter)Outputs_get_T_HTR_HP_data,(setter)0,
	PyDoc_STR("*sequence*: Temperature points along HTR HP stream [C]"),
 	NULL},
{"T_HTR_LP_data", (getter)Outputs_get_T_HTR_LP_data,(setter)0,
	PyDoc_STR("*sequence*: Temperature points along HTR LP stream [C]"),
 	NULL},
{"T_LTR_HP_data", (getter)Outputs_get_T_LTR_HP_data,(setter)0,
	PyDoc_STR("*sequence*: Temperature points along LTR HP stream [C]"),
 	NULL},
{"T_LTR_LP_data", (getter)Outputs_get_T_LTR_LP_data,(setter)0,
	PyDoc_STR("*sequence*: Temperature points along LTR LP stream [C]"),
 	NULL},
{"T_PHX_data", (getter)Outputs_get_T_PHX_data,(setter)0,
	PyDoc_STR("*sequence*: Temperature points along PHX stream [C]"),
 	NULL},
{"T_amb_ind", (getter)Outputs_get_T_amb_ind,(setter)0,
	PyDoc_STR("*sequence[sequence]*: Parametric of ambient temp w/ HTF temp levels"),
 	NULL},
{"T_co2_PHX_in", (getter)Outputs_get_T_co2_PHX_in,(setter)0,
	PyDoc_STR("*float*: CO2 temperature at PHX inlet [C]"),
 	NULL},
{"T_comp_in", (getter)Outputs_get_T_comp_in,(setter)0,
	PyDoc_STR("*float*: Compressor inlet temperature [C]"),
 	NULL},
{"T_htf_cold_des", (getter)Outputs_get_T_htf_cold_des,(setter)0,
	PyDoc_STR("*float*: HTF design cold temperature (PHX outlet) [C]"),
 	NULL},
{"T_htf_ind", (getter)Outputs_get_T_htf_ind,(setter)0,
	PyDoc_STR("*sequence[sequence]*: Parametric of HTF temperature w/ ND HTF mass flow rate levels"),
 	NULL},
{"T_main_cooler_data", (getter)Outputs_get_T_main_cooler_data,(setter)0,
	PyDoc_STR("*sequence*: Temperature points along main cooler stream [C]"),
 	NULL},
{"T_pre_cooler_data", (getter)Outputs_get_T_pre_cooler_data,(setter)0,
	PyDoc_STR("*sequence*: Temperature points along pre cooler stream [C]"),
 	NULL},
{"T_state_points", (getter)Outputs_get_T_state_points,(setter)0,
	PyDoc_STR("*sequence*: Cycle temperature state points [C]"),
 	NULL},
{"T_turb_in", (getter)Outputs_get_T_turb_in,(setter)0,
	PyDoc_STR("*float*: Turbine inlet temperature [C]"),
 	NULL},
{"UA_PHX", (getter)Outputs_get_UA_PHX,(setter)0,
	PyDoc_STR("*float*: PHX Conductance [MW/K]"),
 	NULL},
{"c_tot_W_dot", (getter)Outputs_get_c_tot_W_dot,(setter)0,
	PyDoc_STR("*float*: Compressor total summed power [MWe]"),
 	NULL},
{"c_tot_cost", (getter)Outputs_get_c_tot_cost,(setter)0,
	PyDoc_STR("*float*: Compressor total cost [M$]"),
 	NULL},
{"cooler_tot_UA", (getter)Outputs_get_cooler_tot_UA,(setter)0,
	PyDoc_STR("*float*: Total cooler conductance [MW/K]"),
 	NULL},
{"cooler_tot_W_dot_fan", (getter)Outputs_get_cooler_tot_W_dot_fan,(setter)0,
	PyDoc_STR("*float*: Total cooler fan power [MWe]"),
 	NULL},
{"cooler_tot_cost", (getter)Outputs_get_cooler_tot_cost,(setter)0,
	PyDoc_STR("*float*: Total cooler cost [M$]"),
 	NULL},
{"cycle_cost", (getter)Outputs_get_cycle_cost,(setter)0,
	PyDoc_STR("*float*: Cycle cost [M$]"),
 	NULL},
{"cycle_spec_cost", (getter)Outputs_get_cycle_spec_cost,(setter)0,
	PyDoc_STR("*float*: Cycle specific cost [$/kWe]"),
 	NULL},
{"cycle_spec_cost_thermal", (getter)Outputs_get_cycle_spec_cost_thermal,(setter)0,
	PyDoc_STR("*float*: Cycle specific cost - thermal [$/kWt]"),
 	NULL},
{"deltaT_HTF_PHX", (getter)Outputs_get_deltaT_HTF_PHX,(setter)0,
	PyDoc_STR("*float*: HTF temp difference across PHX [C]"),
 	NULL},
{"eff_HTR", (getter)Outputs_get_eff_HTR,(setter)0,
	PyDoc_STR("*float*: High temp recuperator effectiveness"),
 	NULL},
{"eff_LTR", (getter)Outputs_get_eff_LTR,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator effectiveness"),
 	NULL},
{"eff_PHX", (getter)Outputs_get_eff_PHX,(setter)0,
	PyDoc_STR("*float*: PHX effectiveness"),
 	NULL},
{"eta_thermal_calc", (getter)Outputs_get_eta_thermal_calc,(setter)0,
	PyDoc_STR("*float*: Calculated cycle thermal efficiency [-]"),
 	NULL},
{"h_mc_data", (getter)Outputs_get_h_mc_data,(setter)0,
	PyDoc_STR("*sequence*: Enthalpy points along main compression [kJ/kg]"),
 	NULL},
{"h_pc_data", (getter)Outputs_get_h_pc_data,(setter)0,
	PyDoc_STR("*sequence*: Enthalpy points along pre compression [kJ/kg]"),
 	NULL},
{"h_rc_data", (getter)Outputs_get_h_rc_data,(setter)0,
	PyDoc_STR("*sequence*: Enthalpy points along re compression [kJ/kg]"),
 	NULL},
{"h_state_points", (getter)Outputs_get_h_state_points,(setter)0,
	PyDoc_STR("*sequence*: Cycle enthalpy state points [kJ/kg]"),
 	NULL},
{"h_t_data", (getter)Outputs_get_h_t_data,(setter)0,
	PyDoc_STR("*sequence*: Enthalpy points along turbine expansion [kJ/kg]"),
 	NULL},
{"m_dot_co2_full", (getter)Outputs_get_m_dot_co2_full,(setter)0,
	PyDoc_STR("*float*: CO2 mass flow rate through HTR, PHX, turbine [kg/s]"),
 	NULL},
{"m_dot_htf_ND_ind", (getter)Outputs_get_m_dot_htf_ND_ind,(setter)0,
	PyDoc_STR("*sequence[sequence]*: Parametric of ND HTF mass flow rate w/ ambient temp levels"),
 	NULL},
{"m_dot_htf_des", (getter)Outputs_get_m_dot_htf_des,(setter)0,
	PyDoc_STR("*float*: HTF mass flow rate [kg/s]"),
 	NULL},
{"mc_D", (getter)Outputs_get_mc_D,(setter)0,
	PyDoc_STR("*sequence*: Compressor stage diameters [m]"),
 	NULL},
{"mc_N_des", (getter)Outputs_get_mc_N_des,(setter)0,
	PyDoc_STR("*float*: Compressor design shaft speed [rpm]"),
 	NULL},
{"mc_T_out", (getter)Outputs_get_mc_T_out,(setter)0,
	PyDoc_STR("*float*: Compressor outlet temperature [C]"),
 	NULL},
{"mc_W_dot", (getter)Outputs_get_mc_W_dot,(setter)0,
	PyDoc_STR("*float*: Compressor power [MWe]"),
 	NULL},
{"mc_cost", (getter)Outputs_get_mc_cost,(setter)0,
	PyDoc_STR("*float*: Compressor cost [M$]"),
 	NULL},
{"mc_eta_stages_des", (getter)Outputs_get_mc_eta_stages_des,(setter)0,
	PyDoc_STR("*sequence*: Compressor design stage isentropic efficiencies"),
 	NULL},
{"mc_ideal_spec_work", (getter)Outputs_get_mc_ideal_spec_work,(setter)0,
	PyDoc_STR("*float*: Compressor ideal spec work [kJ/kg]"),
 	NULL},
{"mc_m_dot_des", (getter)Outputs_get_mc_m_dot_des,(setter)0,
	PyDoc_STR("*float*: Compressor mass flow rate [kg/s]"),
 	NULL},
{"mc_n_stages", (getter)Outputs_get_mc_n_stages,(setter)0,
	PyDoc_STR("*float*: Compressor stages"),
 	NULL},
{"mc_phi_des", (getter)Outputs_get_mc_phi_des,(setter)0,
	PyDoc_STR("*float*: Compressor design flow coefficient"),
 	NULL},
{"mc_phi_surge", (getter)Outputs_get_mc_phi_surge,(setter)0,
	PyDoc_STR("*float*: Compressor flow coefficient where surge occurs"),
 	NULL},
{"mc_psi_des", (getter)Outputs_get_mc_psi_des,(setter)0,
	PyDoc_STR("*float*: Compressor design ideal head coefficient"),
 	NULL},
{"mc_psi_max_at_N_des", (getter)Outputs_get_mc_psi_max_at_N_des,(setter)0,
	PyDoc_STR("*float*: Compressor max ideal head coefficient at design shaft speed"),
 	NULL},
{"mc_rho_in", (getter)Outputs_get_mc_rho_in,(setter)0,
	PyDoc_STR("*float*: Compressor inlet density [kg/m3]"),
 	NULL},
{"mc_tip_ratio_des", (getter)Outputs_get_mc_tip_ratio_des,(setter)0,
	PyDoc_STR("*sequence*: Compressor design stage tip speed ratio"),
 	NULL},
{"pc_D", (getter)Outputs_get_pc_D,(setter)0,
	PyDoc_STR("*sequence*: Precompressor stage diameters [m]"),
 	NULL},
{"pc_N_des", (getter)Outputs_get_pc_N_des,(setter)0,
	PyDoc_STR("*float*: Precompressor design shaft speed [rpm]"),
 	NULL},
{"pc_P_in_des", (getter)Outputs_get_pc_P_in_des,(setter)0,
	PyDoc_STR("*float*: Precompressor inlet pressure [MPa]"),
 	NULL},
{"pc_T_in_des", (getter)Outputs_get_pc_T_in_des,(setter)0,
	PyDoc_STR("*float*: Precompressor inlet temperature [C]"),
 	NULL},
{"pc_W_dot", (getter)Outputs_get_pc_W_dot,(setter)0,
	PyDoc_STR("*float*: Precompressor power [MWe]"),
 	NULL},
{"pc_cost", (getter)Outputs_get_pc_cost,(setter)0,
	PyDoc_STR("*float*: Precompressor cost [M$]"),
 	NULL},
{"pc_eta_stages_des", (getter)Outputs_get_pc_eta_stages_des,(setter)0,
	PyDoc_STR("*sequence*: Precompressor design stage isenstropic efficiencies"),
 	NULL},
{"pc_ideal_spec_work_des", (getter)Outputs_get_pc_ideal_spec_work_des,(setter)0,
	PyDoc_STR("*float*: Precompressor ideal spec work [kJ/kg]"),
 	NULL},
{"pc_m_dot_des", (getter)Outputs_get_pc_m_dot_des,(setter)0,
	PyDoc_STR("*float*: Precompressor mass flow rate [kg/s]"),
 	NULL},
{"pc_n_stages", (getter)Outputs_get_pc_n_stages,(setter)0,
	PyDoc_STR("*float*: Precompressor stages"),
 	NULL},
{"pc_phi_des", (getter)Outputs_get_pc_phi_des,(setter)0,
	PyDoc_STR("*float*: Precompressor design flow coefficient"),
 	NULL},
{"pc_phi_surge", (getter)Outputs_get_pc_phi_surge,(setter)0,
	PyDoc_STR("*float*: Precompressor flow coefficient where surge occurs"),
 	NULL},
{"pc_rho_in_des", (getter)Outputs_get_pc_rho_in_des,(setter)0,
	PyDoc_STR("*float*: Precompressor inlet density [kg/m3]"),
 	NULL},
{"pc_tip_ratio_des", (getter)Outputs_get_pc_tip_ratio_des,(setter)0,
	PyDoc_STR("*sequence*: Precompressor design stage tip speed ratio"),
 	NULL},
{"q_dot_HTR", (getter)Outputs_get_q_dot_HTR,(setter)0,
	PyDoc_STR("*float*: High temp recuperator heat transfer [MWt]"),
 	NULL},
{"q_dot_LTR", (getter)Outputs_get_q_dot_LTR,(setter)0,
	PyDoc_STR("*float*: Low temp recuperator heat transfer [MWt]"),
 	NULL},
{"q_dot_PHX", (getter)Outputs_get_q_dot_PHX,(setter)0,
	PyDoc_STR("*float*: PHX heat transfer [MWt]"),
 	NULL},
{"rc_D", (getter)Outputs_get_rc_D,(setter)0,
	PyDoc_STR("*sequence*: Recompressor stage diameters [m]"),
 	NULL},
{"rc_N_des", (getter)Outputs_get_rc_N_des,(setter)0,
	PyDoc_STR("*float*: Recompressor design shaft speed [rpm]"),
 	NULL},
{"rc_P_in_des", (getter)Outputs_get_rc_P_in_des,(setter)0,
	PyDoc_STR("*float*: Recompressor inlet pressure [MPa]"),
 	NULL},
{"rc_P_out_des", (getter)Outputs_get_rc_P_out_des,(setter)0,
	PyDoc_STR("*float*: Recompressor inlet pressure [MPa]"),
 	NULL},
{"rc_T_in_des", (getter)Outputs_get_rc_T_in_des,(setter)0,
	PyDoc_STR("*float*: Recompressor inlet temperature [C]"),
 	NULL},
{"rc_T_out_des", (getter)Outputs_get_rc_T_out_des,(setter)0,
	PyDoc_STR("*float*: Recompressor inlet temperature [C]"),
 	NULL},
{"rc_W_dot", (getter)Outputs_get_rc_W_dot,(setter)0,
	PyDoc_STR("*float*: Recompressor power [MWe]"),
 	NULL},
{"rc_cost", (getter)Outputs_get_rc_cost,(setter)0,
	PyDoc_STR("*float*: Recompressor cost [M$]"),
 	NULL},
{"rc_eta_stages_des", (getter)Outputs_get_rc_eta_stages_des,(setter)0,
	PyDoc_STR("*sequence*: Recompressor design stage isenstropic efficiencies"),
 	NULL},
{"rc_m_dot_des", (getter)Outputs_get_rc_m_dot_des,(setter)0,
	PyDoc_STR("*float*: Recompressor mass flow rate [kg/s]"),
 	NULL},
{"rc_n_stages", (getter)Outputs_get_rc_n_stages,(setter)0,
	PyDoc_STR("*float*: Recompressor stages"),
 	NULL},
{"rc_phi_des", (getter)Outputs_get_rc_phi_des,(setter)0,
	PyDoc_STR("*float*: Recompressor design flow coefficient"),
 	NULL},
{"rc_phi_surge", (getter)Outputs_get_rc_phi_surge,(setter)0,
	PyDoc_STR("*float*: Recompressor flow coefficient where surge occurs"),
 	NULL},
{"rc_psi_des", (getter)Outputs_get_rc_psi_des,(setter)0,
	PyDoc_STR("*float*: Recompressor design ideal head coefficient"),
 	NULL},
{"rc_psi_max_at_N_des", (getter)Outputs_get_rc_psi_max_at_N_des,(setter)0,
	PyDoc_STR("*float*: Recompressor max ideal head coefficient at design shaft speed"),
 	NULL},
{"rc_tip_ratio_des", (getter)Outputs_get_rc_tip_ratio_des,(setter)0,
	PyDoc_STR("*sequence*: Recompressor design stage tip speed ratio"),
 	NULL},
{"recomp_frac", (getter)Outputs_get_recomp_frac,(setter)0,
	PyDoc_STR("*float*: Recompression fraction [-]"),
 	NULL},
{"recup_LTR_UA_frac", (getter)Outputs_get_recup_LTR_UA_frac,(setter)0,
	PyDoc_STR("*float*: Fraction of total conductance to LTR"),
 	NULL},
{"recup_total_UA_assigned", (getter)Outputs_get_recup_total_UA_assigned,(setter)0,
	PyDoc_STR("*float*: Total recuperator UA assigned to design routine [MW/K]"),
 	NULL},
{"recup_total_UA_calculated", (getter)Outputs_get_recup_total_UA_calculated,(setter)0,
	PyDoc_STR("*float*: Total recuperator UA calculated considering max eff and/or min temp diff parameter [MW/K]"),
 	NULL},
{"recup_total_cost", (getter)Outputs_get_recup_total_cost,(setter)0,
	PyDoc_STR("*float*: Total recuperator cost [M$]"),
 	NULL},
{"s_HTR_HP_data", (getter)Outputs_get_s_HTR_HP_data,(setter)0,
	PyDoc_STR("*sequence*: Entropy points along HTR HP stream [kJ/kg-K]"),
 	NULL},
{"s_HTR_LP_data", (getter)Outputs_get_s_HTR_LP_data,(setter)0,
	PyDoc_STR("*sequence*: Entropy points along HTR LP stream [kJ/kg-K]"),
 	NULL},
{"s_LTR_HP_data", (getter)Outputs_get_s_LTR_HP_data,(setter)0,
	PyDoc_STR("*sequence*: Entropy points along LTR HP stream [kJ/kg-K]"),
 	NULL},
{"s_LTR_LP_data", (getter)Outputs_get_s_LTR_LP_data,(setter)0,
	PyDoc_STR("*sequence*: Entropy points along LTR LP stream [kJ/kg-K]"),
 	NULL},
{"s_PHX_data", (getter)Outputs_get_s_PHX_data,(setter)0,
	PyDoc_STR("*sequence*: Entropy points along PHX stream [kJ/kg-K]"),
 	NULL},
{"s_main_cooler_data", (getter)Outputs_get_s_main_cooler_data,(setter)0,
	PyDoc_STR("*sequence*: Entropy points along main cooler stream [kJ/kg-K]"),
 	NULL},
{"s_pre_cooler_data", (getter)Outputs_get_s_pre_cooler_data,(setter)0,
	PyDoc_STR("*sequence*: Entropy points along pre cooler stream [kJ/kg-K]"),
 	NULL},
{"s_state_points", (getter)Outputs_get_s_state_points,(setter)0,
	PyDoc_STR("*sequence*: Cycle entropy state points [kJ/kg-K]"),
 	NULL},
{"t_D", (getter)Outputs_get_t_D,(setter)0,
	PyDoc_STR("*float*: Turbine diameter [m]"),
 	NULL},
{"t_N_des", (getter)Outputs_get_t_N_des,(setter)0,
	PyDoc_STR("*float*: Turbine design shaft speed [rpm]"),
 	NULL},
{"t_P_in_des", (getter)Outputs_get_t_P_in_des,(setter)0,
	PyDoc_STR("*float*: Turbine design inlet pressure [MPa]"),
 	NULL},
{"t_P_out_des", (getter)Outputs_get_t_P_out_des,(setter)0,
	PyDoc_STR("*float*: Turbine design outlet pressure [MPa]"),
 	NULL},
{"t_T_out_des", (getter)Outputs_get_t_T_out_des,(setter)0,
	PyDoc_STR("*float*: Turbine outlet temperature [C]"),
 	NULL},
{"t_W_dot", (getter)Outputs_get_t_W_dot,(setter)0,
	PyDoc_STR("*float*: Turbine power [MWe]"),
 	NULL},
{"t_cost", (getter)Outputs_get_t_cost,(setter)0,
	PyDoc_STR("*float*: Tubine cost [M$]"),
 	NULL},
{"t_m_dot_des", (getter)Outputs_get_t_m_dot_des,(setter)0,
	PyDoc_STR("*float*: Turbine mass flow rate [kg/s]"),
 	NULL},
{"t_nu_des", (getter)Outputs_get_t_nu_des,(setter)0,
	PyDoc_STR("*float*: Turbine design velocity ratio"),
 	NULL},
{"t_tip_ratio_des", (getter)Outputs_get_t_tip_ratio_des,(setter)0,
	PyDoc_STR("*float*: Turbine design tip speed ratio"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject Outputs_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"Sco2CspUdPcTables.Outputs",             /*tp_name*/
		sizeof(OutputsObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		Outputs_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		Outputs_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};

/*
 * Sco2CspUdPcTables
 */

typedef struct {
	PyObject_HEAD
	PyObject            *x_attr;        /* Attributes dictionary */
	SAM_Sco2CspUdPcTables   data_ptr;
} Sco2CspUdPcTablesObject;

static PyTypeObject Sco2CspUdPcTables_Type;

static Sco2CspUdPcTablesObject *
newSco2CspUdPcTablesObject(void* data_ptr)
{
	Sco2CspUdPcTablesObject *self;
	self = PyObject_New(Sco2CspUdPcTablesObject, &Sco2CspUdPcTables_Type);

	PySAM_TECH_ATTR("Sco2CspUdPcTables", SAM_Sco2CspUdPcTables_construct)

	PyObject* SystemDesign_obj = SystemDesign_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "SystemDesign", SystemDesign_obj);
	Py_DECREF(SystemDesign_obj);

	PyObject* HeatExchangerDesign_obj = HeatExchangerDesign_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "HeatExchangerDesign", HeatExchangerDesign_obj);
	Py_DECREF(HeatExchangerDesign_obj);

	PyObject* CycleDesign_obj = CycleDesign_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "CycleDesign", CycleDesign_obj);
	Py_DECREF(CycleDesign_obj);

	PyObject* PHXDesign_obj = PHXDesign_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "PHXDesign", PHXDesign_obj);
	Py_DECREF(PHXDesign_obj);

	PyObject* AirCoolerDesign_obj = AirCoolerDesign_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "AirCoolerDesign", AirCoolerDesign_obj);
	Py_DECREF(AirCoolerDesign_obj);

	PyObject* Common_obj = Common_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "Common", Common_obj);
	Py_DECREF(Common_obj);

	PyObject* Outputs_obj = Outputs_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "Outputs", Outputs_obj);
	Py_DECREF(Outputs_obj);


	return self;
}

/* Sco2CspUdPcTables methods */

static void
Sco2CspUdPcTables_dealloc(Sco2CspUdPcTablesObject *self)
{
	Py_XDECREF(self->x_attr);
	SAM_Sco2CspUdPcTables_destruct(self->data_ptr);
	PyObject_Del(self);
}


static PyObject *
Sco2CspUdPcTables_execute(Sco2CspUdPcTablesObject *self, PyObject *args)
{
	int verbosity = 0;

	if (!PyArg_ParseTuple(args, "|i", &verbosity))
		return NULL;

	SAM_error error = new_error();
	SAM_Sco2CspUdPcTables_execute(self->data_ptr, verbosity, &error);
	if (PySAM_has_error(error )) return NULL;

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject *
Sco2CspUdPcTables_assign(Sco2CspUdPcTablesObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_nested_dict((PyObject*)self, self->x_attr, self->data_ptr, dict, "Sco2CspUdPcTables"))
		return NULL;

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject *
Sco2CspUdPcTables_export(Sco2CspUdPcTablesObject *self, PyObject *args)
{
	return PySAM_export_to_nested_dict((PyObject *) self, self->x_attr);
}

static PyMethodDef Sco2CspUdPcTables_methods[] = {
		{"execute",            (PyCFunction)Sco2CspUdPcTables_execute,  METH_VARARGS,
				PyDoc_STR("execute(int verbosity) -> None\n Execute simulation with verbosity level 0 (default) or 1")},
		{"assign",            (PyCFunction)Sco2CspUdPcTables_assign,  METH_VARARGS,
				PyDoc_STR("assign(dict) -> None\n Assign attributes from nested dictionary, except for Outputs\n\n``nested_dict = { 'System Design': { var: val, ...}, ...}``")},
		{"export",            (PyCFunction)Sco2CspUdPcTables_export,  METH_VARARGS,
				PyDoc_STR("export() -> dict\n Export attributes into nested dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
Sco2CspUdPcTables_getattro(Sco2CspUdPcTablesObject *self, PyObject *name)
{
	return PySAM_get_attr((PyObject*) self, (PyObject*) self->x_attr, name);
}

static int
Sco2CspUdPcTables_setattr(Sco2CspUdPcTablesObject *self, const char *name, PyObject *v)
{
	return PySAM_set_attr((PyObject*)self, (PyObject*)self->x_attr, name, v);
}

static PyTypeObject Sco2CspUdPcTables_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"Sco2CspUdPcTables",            /*tp_name*/
		sizeof(Sco2CspUdPcTablesObject),/*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		(destructor)Sco2CspUdPcTables_dealloc,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		(setattrfunc)Sco2CspUdPcTables_setattr,   /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		(getattrofunc)Sco2CspUdPcTables_getattro, /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		"This class contains all the variable information for running a simulation. Variables are grouped together in the subclasses as properties. If property assignments are the wrong type, an error is thrown.",        /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		Sco2CspUdPcTables_methods,      /*tp_methods*/
		0,                          /*tp_members*/
		0,       /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,                          /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};

/* --------------------------------------------------------------------- */


/* Function of no arguments returning new Sco2CspUdPcTables object */

static PyObject *
Sco2CspUdPcTables_new(PyObject *self, PyObject *args)
{
	Sco2CspUdPcTablesObject *rv;
	rv = newSco2CspUdPcTablesObject(0);
	if (rv == NULL)
		return NULL;
	return (PyObject *)rv;
}

static PyObject *
Sco2CspUdPcTables_wrap(PyObject *self, PyObject *args)
{
	Sco2CspUdPcTablesObject *rv;
	long long int ptr = 0;  // 64 bit arch
	if (!PyArg_ParseTuple(args, "L:wrap", &ptr)){
		PyErr_BadArgument();
		return NULL;
	}
	rv = newSco2CspUdPcTablesObject((void*)ptr);
	if (rv == NULL)
		return NULL;
	return (PyObject *)rv;
}

static PyObject *
Sco2CspUdPcTables_default(PyObject *self, PyObject *args)
{
	Sco2CspUdPcTablesObject *rv;
	char* def = 0;
	if (!PyArg_ParseTuple(args, "s:default", &def)){
		PyErr_BadArgument();
		return NULL;
	}
	rv = newSco2CspUdPcTablesObject(0);
	if (rv == NULL)
		return NULL;

	PySAM_load_defaults((PyObject*)rv, rv->x_attr, rv->data_ptr, "Sco2CspUdPcTables", def);

	return (PyObject *)rv;
}

/* ---------- */


/* List of functions defined in the module */

static PyMethodDef Sco2CspUdPcTablesModule_methods[] = {
		{"new",             Sco2CspUdPcTables_new,         METH_VARARGS,
				PyDoc_STR("new() -> Sco2CspUdPcTables")},
		{"default",             Sco2CspUdPcTables_default,         METH_VARARGS,
				PyDoc_STR("default(config) -> Sco2CspUdPcTables\n\nUse financial model-specific default attributes\n"
				"config options:\n\n")},
		{"wrap",             Sco2CspUdPcTables_wrap,         METH_VARARGS,
				PyDoc_STR("wrap(ssc_data_t) -> Sco2CspUdPcTables\n\nUse existing PySSC data\n\n.. warning::\n\n	Do not call PySSC.data_free on the ssc_data_t provided to ``wrap``")},
		{NULL,              NULL}           /* sentinel */
};

PyDoc_STRVAR(module_doc,
			 "Supercritical CO2 Power Cycle");


static int
Sco2CspUdPcTablesModule_exec(PyObject *m)
{
	/* Finalize the type object including setting type of the new type
	 * object; doing it here is required for portability, too. */

	if (PySAM_load_lib(m) < 0) goto fail;
	if (PySAM_init_error(m) < 0) goto fail;

	Sco2CspUdPcTables_Type.tp_dict = PyDict_New();
	if (!Sco2CspUdPcTables_Type.tp_dict) { goto fail; }

	/// Add the SystemDesign type object to Sco2CspUdPcTables_Type
	if (PyType_Ready(&SystemDesign_Type) < 0) { goto fail; }
	PyDict_SetItemString(Sco2CspUdPcTables_Type.tp_dict,
				"SystemDesign",
				(PyObject*)&SystemDesign_Type);
	Py_DECREF(&SystemDesign_Type);

	/// Add the HeatExchangerDesign type object to Sco2CspUdPcTables_Type
	if (PyType_Ready(&HeatExchangerDesign_Type) < 0) { goto fail; }
	PyDict_SetItemString(Sco2CspUdPcTables_Type.tp_dict,
				"HeatExchangerDesign",
				(PyObject*)&HeatExchangerDesign_Type);
	Py_DECREF(&HeatExchangerDesign_Type);

	/// Add the CycleDesign type object to Sco2CspUdPcTables_Type
	if (PyType_Ready(&CycleDesign_Type) < 0) { goto fail; }
	PyDict_SetItemString(Sco2CspUdPcTables_Type.tp_dict,
				"CycleDesign",
				(PyObject*)&CycleDesign_Type);
	Py_DECREF(&CycleDesign_Type);

	/// Add the PHXDesign type object to Sco2CspUdPcTables_Type
	if (PyType_Ready(&PHXDesign_Type) < 0) { goto fail; }
	PyDict_SetItemString(Sco2CspUdPcTables_Type.tp_dict,
				"PHXDesign",
				(PyObject*)&PHXDesign_Type);
	Py_DECREF(&PHXDesign_Type);

	/// Add the AirCoolerDesign type object to Sco2CspUdPcTables_Type
	if (PyType_Ready(&AirCoolerDesign_Type) < 0) { goto fail; }
	PyDict_SetItemString(Sco2CspUdPcTables_Type.tp_dict,
				"AirCoolerDesign",
				(PyObject*)&AirCoolerDesign_Type);
	Py_DECREF(&AirCoolerDesign_Type);

	/// Add the Common type object to Sco2CspUdPcTables_Type
	if (PyType_Ready(&Common_Type) < 0) { goto fail; }
	PyDict_SetItemString(Sco2CspUdPcTables_Type.tp_dict,
				"Common",
				(PyObject*)&Common_Type);
	Py_DECREF(&Common_Type);

	/// Add the Outputs type object to Sco2CspUdPcTables_Type
	if (PyType_Ready(&Outputs_Type) < 0) { goto fail; }
	PyDict_SetItemString(Sco2CspUdPcTables_Type.tp_dict,
				"Outputs",
				(PyObject*)&Outputs_Type);
	Py_DECREF(&Outputs_Type);

	/// Add the Sco2CspUdPcTables type object to the module
	if (PyType_Ready(&Sco2CspUdPcTables_Type) < 0) { goto fail; }
	PyModule_AddObject(m,
				"Sco2CspUdPcTables",
				(PyObject*)&Sco2CspUdPcTables_Type);

	return 0;
	fail:
	Py_XDECREF(m);
	return -1;
}

static struct PyModuleDef_Slot Sco2CspUdPcTablesModule_slots[] = {
		{Py_mod_exec, Sco2CspUdPcTablesModule_exec},
		{0, NULL},
};

static struct PyModuleDef Sco2CspUdPcTablesModule = {
		PyModuleDef_HEAD_INIT,
		"Sco2CspUdPcTables",
		module_doc,
		0,
		Sco2CspUdPcTablesModule_methods,
		Sco2CspUdPcTablesModule_slots,
		NULL,
		NULL,
		NULL
};

/* Export function for the module */

PyMODINIT_FUNC
PyInit_Sco2CspUdPcTables(void)
{
	return PyModuleDef_Init(&Sco2CspUdPcTablesModule);
}