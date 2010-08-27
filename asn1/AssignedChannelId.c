/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#include <asn_internal.h>

#include "AssignedChannelId.h"

int
AssignedChannelId_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1001 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using DynamicChannelId,
 * so here we adjust the DEF accordingly.
 */
static void
AssignedChannelId_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_DynamicChannelId.free_struct;
	td->print_struct   = asn_DEF_DynamicChannelId.print_struct;
	td->ber_decoder    = asn_DEF_DynamicChannelId.ber_decoder;
	td->der_encoder    = asn_DEF_DynamicChannelId.der_encoder;
	td->xer_decoder    = asn_DEF_DynamicChannelId.xer_decoder;
	td->xer_encoder    = asn_DEF_DynamicChannelId.xer_encoder;
	td->uper_decoder   = asn_DEF_DynamicChannelId.uper_decoder;
	td->uper_encoder   = asn_DEF_DynamicChannelId.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_DynamicChannelId.per_constraints;
	td->elements       = asn_DEF_DynamicChannelId.elements;
	td->elements_count = asn_DEF_DynamicChannelId.elements_count;
	td->specifics      = asn_DEF_DynamicChannelId.specifics;
}

void
AssignedChannelId_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	AssignedChannelId_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
AssignedChannelId_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	AssignedChannelId_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
AssignedChannelId_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	AssignedChannelId_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
AssignedChannelId_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	AssignedChannelId_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
AssignedChannelId_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	AssignedChannelId_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
AssignedChannelId_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	AssignedChannelId_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
AssignedChannelId_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	AssignedChannelId_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
AssignedChannelId_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	AssignedChannelId_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static ber_tlv_tag_t asn_DEF_AssignedChannelId_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AssignedChannelId = {
	"AssignedChannelId",
	"AssignedChannelId",
	AssignedChannelId_free,
	AssignedChannelId_print,
	AssignedChannelId_constraint,
	AssignedChannelId_decode_ber,
	AssignedChannelId_encode_der,
	AssignedChannelId_decode_xer,
	AssignedChannelId_encode_xer,
	AssignedChannelId_decode_uper,
	AssignedChannelId_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AssignedChannelId_tags_1,
	sizeof(asn_DEF_AssignedChannelId_tags_1)
		/sizeof(asn_DEF_AssignedChannelId_tags_1[0]), /* 1 */
	asn_DEF_AssignedChannelId_tags_1,	/* Same as above */
	sizeof(asn_DEF_AssignedChannelId_tags_1)
		/sizeof(asn_DEF_AssignedChannelId_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};
