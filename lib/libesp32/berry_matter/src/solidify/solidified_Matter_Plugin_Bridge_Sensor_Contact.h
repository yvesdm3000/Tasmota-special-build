/* Solidification of Matter_Plugin_Bridge_Sensor_Contact.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Bridge_Sensor_Contact;

/********************************************************************
** Solidified function: <lambda>
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_Contact__X3Clambda_X3E,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(_X3Clambda_X3E),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x60040009,  //  0000  GETGBL	R1	G9
      0x5C080000,  //  0001  MOVE	R2	R0
      0x7C040200,  //  0002  CALL	R1	1
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_Contact_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str_weak(init),
    /* K1   */  be_nested_str_weak(tasmota_switch_index),
    /* K2   */  be_nested_str_weak(find),
    /* K3   */  be_nested_str_weak(ARG),
    /* K4   */  be_const_int(1),
    /* K5   */  be_const_int(0),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100900,  //  0003  GETMET	R4	R4	K0
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x5C200600,  //  0006  MOVE	R8	R3
      0x7C100800,  //  0007  CALL	R4	4
      0x60100009,  //  0008  GETGBL	R4	G9
      0x8C140702,  //  0009  GETMET	R5	R3	K2
      0x881C0103,  //  000A  GETMBR	R7	R0	K3
      0x58200004,  //  000B  LDCONST	R8	K4
      0x7C140600,  //  000C  CALL	R5	3
      0x7C100200,  //  000D  CALL	R4	1
      0x90020204,  //  000E  SETMBR	R0	K1	R4
      0x88100101,  //  000F  GETMBR	R4	R0	K1
      0x18100905,  //  0010  LE	R4	R4	K5
      0x78120000,  //  0011  JMPF	R4	#0013
      0x90020304,  //  0012  SETMBR	R0	K1	K4
      0x80000000,  //  0013  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_values_prefix
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_Contact_web_values_prefix,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[10]) {     /* constants */
    /* K0   */  be_nested_str_weak(webserver),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(get_name),
    /* K3   */  be_nested_str_weak(Switch),
    /* K4   */  be_nested_str_weak(tasmota_switch_index),
    /* K5   */  be_nested_str_weak(content_send),
    /* K6   */  be_nested_str_weak(format),
    /* K7   */  be_nested_str_weak(PREFIX),
    /* K8   */  be_nested_str_weak(html_escape),
    /* K9   */  be_nested_str_weak(),
    }),
    be_str_weak(web_values_prefix),
    &be_const_str_solidified,
    ( &(const binstruction[23]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0102,  //  0002  GETMET	R3	R0	K2
      0x7C0C0200,  //  0003  CALL	R3	1
      0x5C100600,  //  0004  MOVE	R4	R3
      0x74120004,  //  0005  JMPT	R4	#000B
      0x60100008,  //  0006  GETGBL	R4	G8
      0x88140104,  //  0007  GETMBR	R5	R0	K4
      0x7C100200,  //  0008  CALL	R4	1
      0x00120604,  //  0009  ADD	R4	K3	R4
      0x5C0C0800,  //  000A  MOVE	R3	R4
      0x8C100305,  //  000B  GETMET	R4	R1	K5
      0x8C180506,  //  000C  GETMET	R6	R2	K6
      0x88200107,  //  000D  GETMBR	R8	R0	K7
      0x780E0003,  //  000E  JMPF	R3	#0013
      0x8C240308,  //  000F  GETMET	R9	R1	K8
      0x5C2C0600,  //  0010  MOVE	R11	R3
      0x7C240400,  //  0011  CALL	R9	2
      0x70020000,  //  0012  JMP		#0014
      0x58240009,  //  0013  LDCONST	R9	K9
      0x7C180600,  //  0014  CALL	R6	3
      0x7C100400,  //  0015  CALL	R4	2
      0x80000000,  //  0016  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_update
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_Contact_parse_update,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(find),
    /* K1   */  be_nested_str_weak(Switch),
    /* K2   */  be_nested_str_weak(tasmota_switch_index),
    /* K3   */  be_nested_str_weak(ON),
    /* K4   */  be_nested_str_weak(shadow_contact),
    /* K5   */  be_nested_str_weak(attribute_updated),
    /* K6   */  be_const_int(0),
    }),
    be_str_weak(parse_update),
    &be_const_str_solidified,
    ( &(const binstruction[28]) {  /* code */
      0x540E0007,  //  0000  LDINT	R3	8
      0x1C0C0403,  //  0001  EQ	R3	R2	R3
      0x780E0017,  //  0002  JMPF	R3	#001B
      0x500C0000,  //  0003  LDBOOL	R3	0	0
      0x8C100300,  //  0004  GETMET	R4	R1	K0
      0x60180008,  //  0005  GETGBL	R6	G8
      0x881C0102,  //  0006  GETMBR	R7	R0	K2
      0x7C180200,  //  0007  CALL	R6	1
      0x001A0206,  //  0008  ADD	R6	K1	R6
      0x7C100400,  //  0009  CALL	R4	2
      0x1C100903,  //  000A  EQ	R4	R4	K3
      0x5C0C0800,  //  000B  MOVE	R3	R4
      0x88100104,  //  000C  GETMBR	R4	R0	K4
      0x4C140000,  //  000D  LDNIL	R5
      0x20100805,  //  000E  NE	R4	R4	R5
      0x78120009,  //  000F  JMPF	R4	#001A
      0x88100104,  //  0010  GETMBR	R4	R0	K4
      0x60140017,  //  0011  GETGBL	R5	G23
      0x5C180600,  //  0012  MOVE	R6	R3
      0x7C140200,  //  0013  CALL	R5	1
      0x20100805,  //  0014  NE	R4	R4	R5
      0x78120003,  //  0015  JMPF	R4	#001A
      0x8C100105,  //  0016  GETMET	R4	R0	K5
      0x541A0044,  //  0017  LDINT	R6	69
      0x581C0006,  //  0018  LDCONST	R7	K6
      0x7C100600,  //  0019  CALL	R4	3
      0x90020803,  //  001A  SETMBR	R0	K4	R3
      0x80000000,  //  001B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_Contact_read_attribute,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(shadow_contact),
    /* K7   */  be_nested_str_weak(create_TLV),
    /* K8   */  be_nested_str_weak(BOOL),
    /* K9   */  be_nested_str_weak(NULL),
    /* K10  */  be_nested_str_weak(U4),
    /* K11  */  be_const_int(1),
    /* K12  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[53]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xB8120200,  //  0001  GETNGBL	R4	K1
      0x88100902,  //  0002  GETMBR	R4	R4	K2
      0x88140503,  //  0003  GETMBR	R5	R2	K3
      0x88180504,  //  0004  GETMBR	R6	R2	K4
      0x541E0044,  //  0005  LDINT	R7	69
      0x1C1C0A07,  //  0006  EQ	R7	R5	R7
      0x781E0023,  //  0007  JMPF	R7	#002C
      0x1C1C0D05,  //  0008  EQ	R7	R6	K5
      0x781E000F,  //  0009  JMPF	R7	#001A
      0x881C0106,  //  000A  GETMBR	R7	R0	K6
      0x4C200000,  //  000B  LDNIL	R8
      0x201C0E08,  //  000C  NE	R7	R7	R8
      0x781E0005,  //  000D  JMPF	R7	#0014
      0x8C1C0907,  //  000E  GETMET	R7	R4	K7
      0x88240908,  //  000F  GETMBR	R9	R4	K8
      0x88280106,  //  0010  GETMBR	R10	R0	K6
      0x7C1C0600,  //  0011  CALL	R7	3
      0x80040E00,  //  0012  RET	1	R7
      0x70020004,  //  0013  JMP		#0019
      0x8C1C0907,  //  0014  GETMET	R7	R4	K7
      0x88240909,  //  0015  GETMBR	R9	R4	K9
      0x4C280000,  //  0016  LDNIL	R10
      0x7C1C0600,  //  0017  CALL	R7	3
      0x80040E00,  //  0018  RET	1	R7
      0x70020010,  //  0019  JMP		#002B
      0x541EFFFB,  //  001A  LDINT	R7	65532
      0x1C1C0C07,  //  001B  EQ	R7	R6	R7
      0x781E0005,  //  001C  JMPF	R7	#0023
      0x8C1C0907,  //  001D  GETMET	R7	R4	K7
      0x8824090A,  //  001E  GETMBR	R9	R4	K10
      0x58280005,  //  001F  LDCONST	R10	K5
      0x7C1C0600,  //  0020  CALL	R7	3
      0x80040E00,  //  0021  RET	1	R7
      0x70020007,  //  0022  JMP		#002B
      0x541EFFFC,  //  0023  LDINT	R7	65533
      0x1C1C0C07,  //  0024  EQ	R7	R6	R7
      0x781E0004,  //  0025  JMPF	R7	#002B
      0x8C1C0907,  //  0026  GETMET	R7	R4	K7
      0x8824090A,  //  0027  GETMBR	R9	R4	K10
      0x5828000B,  //  0028  LDCONST	R10	K11
      0x7C1C0600,  //  0029  CALL	R7	3
      0x80040E00,  //  002A  RET	1	R7
      0x70020007,  //  002B  JMP		#0034
      0x601C0003,  //  002C  GETGBL	R7	G3
      0x5C200000,  //  002D  MOVE	R8	R0
      0x7C1C0200,  //  002E  CALL	R7	1
      0x8C1C0F0C,  //  002F  GETMET	R7	R7	K12
      0x5C240200,  //  0030  MOVE	R9	R1
      0x5C280400,  //  0031  MOVE	R10	R2
      0x7C1C0600,  //  0032  CALL	R7	3
      0x80040E00,  //  0033  RET	1	R7
      0x80000000,  //  0034  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_values
********************************************************************/
be_local_closure(Matter_Plugin_Bridge_Sensor_Contact_web_values,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_nested_str_weak(webserver),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(web_values_prefix),
    /* K3   */  be_nested_str_weak(content_send),
    /* K4   */  be_nested_str_weak(format),
    /* K5   */  be_nested_str_weak(Contact_X25i_X20_X25s),
    /* K6   */  be_nested_str_weak(tasmota_switch_index),
    /* K7   */  be_nested_str_weak(web_value_onoff),
    /* K8   */  be_nested_str_weak(shadow_contact),
    }),
    be_str_weak(web_values),
    &be_const_str_solidified,
    ( &(const binstruction[14]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0x8C0C0102,  //  0002  GETMET	R3	R0	K2
      0x7C0C0200,  //  0003  CALL	R3	1
      0x8C0C0303,  //  0004  GETMET	R3	R1	K3
      0x8C140504,  //  0005  GETMET	R5	R2	K4
      0x581C0005,  //  0006  LDCONST	R7	K5
      0x88200106,  //  0007  GETMBR	R8	R0	K6
      0x8C240107,  //  0008  GETMET	R9	R0	K7
      0x882C0108,  //  0009  GETMBR	R11	R0	K8
      0x7C240400,  //  000A  CALL	R9	2
      0x7C140800,  //  000B  CALL	R5	4
      0x7C0C0400,  //  000C  CALL	R3	2
      0x80000000,  //  000D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Bridge_Sensor_Contact
********************************************************************/
extern const bclass be_class_Matter_Plugin_Bridge_HTTP;
be_local_class(Matter_Plugin_Bridge_Sensor_Contact,
    2,
    &be_class_Matter_Plugin_Bridge_HTTP,
    be_nested_map(16,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(ARG_TYPE, 5), be_const_static_closure(Matter_Plugin_Bridge_Sensor_Contact__X3Clambda_X3E_closure) },
        { be_const_key_weak(ARG_HINT, 4), be_nested_str_weak(Enter_X20Switch_X3Cx_X3E_X20number) },
        { be_const_key_weak(shadow_contact, -1), be_const_var(1) },
        { be_const_key_weak(init, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_Contact_init_closure) },
        { be_const_key_weak(web_values_prefix, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_Contact_web_values_prefix_closure) },
        { be_const_key_weak(web_values, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_Contact_web_values_closure) },
        { be_const_key_weak(NAME, -1), be_nested_str_weak(Contact) },
        { be_const_key_weak(ARG, -1), be_nested_str_weak(switch) },
        { be_const_key_weak(UPDATE_TIME, 14), be_const_int(5000) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_Contact_read_attribute_closure) },
        { be_const_key_weak(CLUSTERS, 11), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(69, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(TYPES, 12), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(21, -1), be_const_int(1) },
    }))    ) } )) },
        { be_const_key_weak(tasmota_switch_index, 9), be_const_var(0) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(http_contact) },
        { be_const_key_weak(parse_update, -1), be_const_closure(Matter_Plugin_Bridge_Sensor_Contact_parse_update_closure) },
        { be_const_key_weak(UPDATE_CMD, -1), be_nested_str_weak(Status_X208) },
    })),
    be_str_weak(Matter_Plugin_Bridge_Sensor_Contact)
);
/*******************************************************************/

void be_load_Matter_Plugin_Bridge_Sensor_Contact_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Bridge_Sensor_Contact);
    be_setglobal(vm, "Matter_Plugin_Bridge_Sensor_Contact");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
