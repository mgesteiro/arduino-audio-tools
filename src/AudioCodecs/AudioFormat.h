/**
 * @file AudioFormat.h
 * @author Phil Schatzmann
 * @brief WAV Audio Formats used by Microsoft e.g. in AVI video files
 * @version 0.1
 * @date 2023-05-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once

namespace audio_tools {

/**
 * @brief Audio format codes used by Microsoft e.g. in avi or wav files
 * @ingroup video
 */
enum class AudioFormat : uint16_t {
  UNKNOWN = 0x0000, /* Microsoft Corporation */
  PCM = 0x0001,
  ADPCM = 0x0002,      /* Microsoft Corporation */
  IEEE_FLOAT = 0x0003, /* Microsoft Corporation */
  // VSELP = 0x0004, /* Compaq Computer Corp. */
  // IBM_CVSD = 0x0005, /* IBM Corporation */
  ALAW = 0x0006,  /* Microsoft Corporation */
  MULAW = 0x0007, /* Microsoft Corporation */
  // DTS = 0x0008, /* Microsoft Corporation */
  // DRM = 0x0009, /* Microsoft Corporation */
  // WMAVOICE9 = 0x000A, /* Microsoft Corporation */
  // WMAVOICE10 = 0x000B, /* Microsoft Corporation */
  OKI_ADPCM = 0x0010, /* OKI */
  DVI_ADPCM = 0x0011, /* Intel Corporation */
  //IMA_ADPCM(DVI_ADPCM), /*  Intel Corporation */
  MEDIASPACE_ADPCM = 0x0012, /* Videologic */
  SIERRA_ADPCM = 0x0013, /* Sierra Semiconductor Corp */
  G723_ADPCM = 0x0014, /* Antex Electronics Corporation */
  // DIGISTD = 0x0015, /* DSP Solutions, Inc. */
  // DIGIFIX = 0x0016, /* DSP Solutions, Inc. */
  DIALOGIC_OKI_ADPCM = 0x0017, /* Dialogic Corporation */
  MEDIAVISION_ADPCM = 0x0018, /* Media Vision, Inc. */
  // CU_CODEC = 0x0019, /* Hewlett-Packard Company */
  // HP_DYN_VOICE = 0x001A, /* Hewlett-Packard Company */
  YAMAHA_ADPCM = 0x0020, /* Yamaha Corporation of America */
  // SONARC = 0x0021, /* Speech Compression */
  // DSPGROUP_TRUESPEECH = 0x0022, /* DSP Group, Inc */
  // ECHOSC1 = 0x0023, /* Echo Speech Corporation */
  // AUDIOFILE_AF36 = 0x0024, /* Virtual Music, Inc. */
  // APTX = 0x0025, /* Audio Processing Technology */
  // AUDIOFILE_AF10 = 0x0026, /* Virtual Music, Inc. */
  // PROSODY_1612 = 0x0027, /* Aculab plc */
  // LRC = 0x0028, /* Merging Technologies S.A. */
  // DOLBY_AC2 = 0x0030, /* Dolby Laboratories */
  // GSM610 = 0x0031, /* Microsoft Corporation */
  // MSNAUDIO = 0x0032, /* Microsoft Corporation */
  ANTEX_ADPCME = 0x0033, /* Antex Electronics Corporation */
  // CONTROL_RES_VQLPC = 0x0034, /* Control Resources Limited */
  // DIGIREAL = 0x0035, /* DSP Solutions, Inc. */
  DIGIADPCM = 0x0036, /* DSP Solutions, Inc. */
  // CONTROL_RES_CR10 = 0x0037, /* Control Resources Limited */
  NMS_VBXADPCM = 0x0038, /* Natural MicroSystems */
  CS_IMAADPCM = 0x0039, /* Crystal Semiconductor IMA ADPCM */
  // ECHOSC3 = 0x003A, /* Echo Speech Corporation */
  ROCKWELL_ADPCM = 0x003B, /* Rockwell International */
  // ROCKWELL_DIGITALK = 0x003C, /* Rockwell International */
  // XEBEC = 0x003D, /* Xebec Multimedia Solutions Limited */
  G721_ADPCM = 0x0040, /* Antex Electronics Corporation */
  // G728_CELP = 0x0041, /* Antex Electronics Corporation */
  // MSG723 = 0x0042, /* Microsoft Corporation */
  // INTEL_G723_1 = 0x0043, /* Intel Corp. */
  // INTEL_G729 = 0x0044, /* Intel Corp. */
  // SHARP_G726 = 0x0045, /* Sharp */
  // MPEG = 0x0050, /* Microsoft Corporation */
  // RT24 = 0x0052, /* InSoft, Inc. */
  // PAC = 0x0053, /* InSoft, Inc. */
  // MPEGLAYER3 = 0x0055, /* ISO/MPEG Layer3 Format Tag */
  // LUCENT_G723 = 0x0059, /* Lucent Technologies */
  // CIRRUS = 0x0060, /* Cirrus Logic */
  // ESPCM = 0x0061, /* ESS Technology */
  // VOXWARE = 0x0062, /* Voxware Inc */
  // CANOPUS_ATRAC = 0x0063, /* Canopus, co., Ltd. */
  G726_ADPCM = 0x0064, /* APICOM */
  G722_ADPCM = 0x0065, /* APICOM */
  // DSAT = 0x0066, /* Microsoft Corporation */
  // DSAT_DISPLAY = 0x0067, /* Microsoft Corporation */
  // VOXWARE_BYTE_ALIGNED = 0x0069, /* Voxware Inc */
  // VOXWARE_AC8 = 0x0070, /* Voxware Inc */
  // VOXWARE_AC10 = 0x0071, /* Voxware Inc */
  // VOXWARE_AC16 = 0x0072, /* Voxware Inc */
  // VOXWARE_AC20 = 0x0073, /* Voxware Inc */
  // VOXWARE_RT24 = 0x0074, /* Voxware Inc */
  // VOXWARE_RT29 = 0x0075, /* Voxware Inc */
  // VOXWARE_RT29HW = 0x0076, /* Voxware Inc */
  // VOXWARE_VR12 = 0x0077, /* Voxware Inc */
  // VOXWARE_VR18 = 0x0078, /* Voxware Inc */
  // VOXWARE_TQ40 = 0x0079, /* Voxware Inc */
  // VOXWARE_SC3 = 0x007A, /* Voxware Inc */
  // VOXWARE_SC3_1 = 0x007B, /* Voxware Inc */
  // SOFTSOUND = 0x0080, /* Softsound, Ltd. */
  // VOXWARE_TQ60 = 0x0081, /* Voxware Inc */
  // MSRT24 = 0x0082, /* Microsoft Corporation */
  // G729A = 0x0083, /* AT&T Labs, Inc. */
  // MVI_MVI2 = 0x0084, /* Motion Pixels */
  // DF_G726 = 0x0085, /* DataFusion Systems (Pty) (Ltd) */
  // DF_GSM610 = 0x0086, /* DataFusion Systems (Pty) (Ltd) */
  // ISIAUDIO = 0x0088, /* Iterated Systems, Inc. */
  // ONLIVE = 0x0089, /* OnLive! Technologies, Inc. */
  // MULTITUDE_FT_SX20 = 0x008A, /* Multitude Inc. */
  INFOCOM_ITS_G721_ADPCM = 0x008B, /* Infocom */
  // CONVEDIA_G729 = 0x008C, /* Convedia Corp. */
  // CONGRUENCY = 0x008D, /* Congruency Inc. */
  // SBC24 = 0x0091, /* Siemens Business Communications Sys */
  // DOLBY_AC3_SPDIF = 0x0092, /* Sonic Foundry */
  // MEDIASONIC_G723 = 0x0093, /* MediaSonic */
  // PROSODY_8KBPS = 0x0094, /* Aculab plc */
  ZYXEL_ADPCM = 0x0097, /* ZyXEL Communications, Inc. */
  // PHILIPS_LPCBB = 0x0098, /* Philips Speech Processing */
  // PACKED = 0x0099, /* Studer Professional Audio AG */
  // MALDEN_PHONYTALK = 0x00A0, /* Malden Electronics Ltd. */
  // RACAL_RECORDER_GSM = 0x00A1, /* Racal recorders */
  // RACAL_RECORDER_G720_A = 0x00A2, /* Racal recorders */
  // RACAL_RECORDER_G723_1 = 0x00A3, /* Racal recorders */
  // RACAL_RECORDER_TETRA_ACELP = 0x00A4, /* Racal recorders */
  // NEC_AAC = 0x00B0, /* NEC Corp. */
  // RAW_AAC1 = 0x00FF, /* For Raw AAC, with format block
  RHETOREX_ADPCM = 0x0100, /* Rhetorex Inc. */
  // IRAT = 0x0101, /* BeCubed Software Inc. */
  // VIVO_G723 = 0x0111, /* Vivo Software */
  // VIVO_SIREN = 0x0112, /* Vivo Software */
  // PHILIPS_CELP = 0x0120, /* Philips Speech Processing */
  // PHILIPS_GRUNDIG = 0x0121, /* Philips Speech Processing */
  // DIGITAL_G723 = 0x0123, /* Digital Equipment Corporation */
  SANYO_LD_ADPCM = 0x0125, /* Sanyo Electric Co., Ltd. */
  // SIPROLAB_ACEPLNET = 0x0130, /* Sipro Lab Telecom Inc. */
  // SIPROLAB_ACELP4800 = 0x0131, /* Sipro Lab Telecom Inc. */
  // SIPROLAB_ACELP8V3 = 0x0132, /* Sipro Lab Telecom Inc. */
  // SIPROLAB_G729 = 0x0133, /* Sipro Lab Telecom Inc. */
  // SIPROLAB_G729A = 0x0134, /* Sipro Lab Telecom Inc. */
  // SIPROLAB_KELVIN = 0x0135, /* Sipro Lab Telecom Inc. */
  // VOICEAGE_AMR = 0x0136, /* VoiceAge Corp. */
  G726ADPCM = 0x0140, /* Dictaphone Corporation */
  // DICTAPHONE_CELP68 = 0x0141, /* Dictaphone Corporation */
  // DICTAPHONE_CELP54 = 0x0142, /* Dictaphone Corporation */
  // QUALCOMM_PUREVOICE = 0x0150, /* Qualcomm, Inc. */
  // QUALCOMM_HALFRATE = 0x0151, /* Qualcomm, Inc. */
  // TUBGSM = 0x0155, /* Ring Zero Systems, Inc. */
  // MSAUDIO1 = 0x0160, /* Microsoft Corporation */
  // WMAUDIO2 = 0x0161, /* Microsoft Corporation */
  // WMAUDIO3 = 0x0162, /* Microsoft Corporation */
  // WMAUDIO_LOSSLESS = 0x0163, /* Microsoft Corporation */
  // WMASPDIF = 0x0164, /* Microsoft Corporation */
  UNISYS_NAP_ADPCM = 0x0170, /* Unisys Corp. */
  // UNISYS_NAP_ULAW = 0x0171, /* Unisys Corp. */
  // UNISYS_NAP_ALAW = 0x0172, /* Unisys Corp. */
  // UNISYS_NAP_16K = 0x0173, /* Unisys Corp. */
  // SYCOM_ACM_SYC008 = 0x0174, /* SyCom Technologies */
  // SYCOM_ACM_SYC701_G726L = 0x0175, /* SyCom Technologies */
  // SYCOM_ACM_SYC701_CELP54 = 0x0176, /* SyCom Technologies */
  // SYCOM_ACM_SYC701_CELP68 = 0x0177, /* SyCom Technologies */
  // KNOWLEDGE_ADVENTURE_ADPCM = 0x0178, /* Knowledge Adventure, Inc.*/
  // FRAUNHOFER_IIS_MPEG2_AAC = 0x0180, /* Fraunhofer IIS */
  // DTS_DS = 0x0190, /* Digital Theatre Systems, Inc. */
  // CREATIVE_ADPCM = 0x0200, /* Creative Labs, Inc */
  // CREATIVE_FASTSPEECH8 = 0x0202, /* Creative Labs, Inc */
  // CREATIVE_FASTSPEECH10 = 0x0203, /* Creative Labs, Inc */
  // UHER_ADPCM = 0x0210, /* UHER informatic GmbH */
  // ULEAD_DV_AUDIO = 0x0215, /* Ulead Systems, Inc. */
  // ULEAD_DV_AUDIO_1 = 0x0216, /* Ulead Systems, Inc. */
  // QUARTERDECK = 0x0220, /* Quarterdeck Corporation */
  // ILINK_VC = 0x0230, /* I-link Worldwide */
  // RAW_SPORT = 0x0240, /* Aureal Semiconductor */
  // ESST_AC3 = 0x0241, /* ESS Technology, Inc. */
  // GENERIC_PASSTHRU = 0x0249,
  // IPI_HSX = 0x0250, /* Interactive Products, Inc. */
  // IPI_RPELP = 0x0251, /* Interactive Products, Inc. */
  // CS2 = 0x0260, /* Consistent Software */
  // SONY_SCX = 0x0270, /* Sony Corp. */
  // SONY_SCY = 0x0271, /* Sony Corp. */
  // SONY_ATRAC3 = 0x0272, /* Sony Corp. */
  // SONY_SPC = 0x0273, /* Sony Corp. */
  // TELUM_AUDIO = 0x0280, /* Telum Inc. */
  // TELUM_IA_AUDIO = 0x0281, /* Telum Inc. */
  // NORCOM_VOICE_SYSTEMS_ADPCM = 0x0285, /* Norcom Electronics Corp.*/
  // FM_TOWNS_SND = 0x0300, /* Fujitsu Corp. */
  // MICRONAS = 0x0350, /* Micronas Semiconductors, Inc. */
  // MICRONAS_CELP833 = 0x0351, /* Micronas Semiconductors, Inc. */
  // BTV_DIGITAL = 0x0400, /* Brooktree Corporation */
  // INTEL_MUSIC_CODER = 0x0401, /* Intel Corp. */
  // INDEO_AUDIO = 0x0402, /* Ligo */
  // QDESIGN_MUSIC = 0x0450, /* QDeign Corporation */
  // ON2_VP7_AUDIO = 0x0500, /* On2 echnologies */
  // ON2_VP6_AUDIO = 0x0501, /* On2 Tchnologies */
  // VME_VMPCM = 0x0680, /* AT&T Labs,Inc. */
  // TPC = 0x0681, /* AT&T Labs, Inc. *
  // LIGHTWAVE_LOSSLESS = 0x08AE, /* Clerjump */
  // OLIGSM = 0x1000, /* Ing C. Olivetti  C., S.p.A. */
  // OLIADPCM = 0x1001, /* Ing C. Olivetti& C., S.p.A.*/
  // OLICELP = 0x1002, /* Ing C. Olivetti &C., S.p.A. */
  // OLISBC = 0x1003, /* Ing C. Olivetti & C, S.p.A. */
  // OLIOPR = 0x1004, /* Ing C. Olivetti & C. S.p.A. */
  // LH_CODEC = 0x1100, /* Lernout & Hauspie *
  // LH_CODEC_CELP = 0x1101, /* Lernout & Hauspie *
  // LH_CODEC_SBC8 = 0x1102, /* Lernout & Hauspie */
  // LH_CODEC_SBC12 = 0x1103, /* Lernout & Hauspie */
  // LH_CODEC_SBC16 = 0x1104, /* Lernout & Hauspie */
  // NORRIS = 0x1400, /* Norris Communications, Inc. */
  // ISIAUDIO_2 = 0x1401, /* ISIAudio */
  // SOUNDSPACE_MUSICOMPRESS = 0x1500, /* AT&T Labs, Inc. */
  // MPEG_ADTS_AAC = 0x1600, /* Microsoft Corporation */
  // MPEG_RAW_AAC = 0x1601, /* Microsoft Corporation */
  // MPEG_LOAS = 0x1602, /* Microsoft Corporation (MPEG-4 Audio
  //                     * Transport Streams (LOAS/LATM) \
  //                     */
  // NOKIA_MPEG_ADTS_AAC = 0x1608, /* Microsoft Corporation */
  // NOKIA_MPEG_RAW_AAC = 0x1609, /* Microsoft Corporation */
  // VODAFONE_MPEG_ADTS_AAC = 0x160A, /* Microsoft Corporation */
  // VODAFONE_MPEG_RAW_AAC = 0x160B, /* Microsoft Corporation */
  // MPEG_HEAAC =
  //     0x1610, /* Microsoft Corporation (MPEG-2 AAC or MPEG-4 HE-AAC
  //     v1/v2 streams
  //             \
  //             with any payload (ADTS, ADIF, LOAS/LATM, RAW). Format block \
  //             icludes MP4 AudioSpecificConfig() -- see HEAACWAVEFORMAT below
  //             */
  // VOXWARE_RT24_SPEECH = 0x181C, /* Voxware Inc. */
  // SONICFOUNDRY_LOSSLESS = 0x1971, /* Sonic Foundry */
  // INNINGS_TELECOM_ADPCM = 0x1979, /* Innings Telecom Inc. */
  // LUCENT_SX8300P = 0x1C07, /* Lucent Technologies */
  // LUCENT_SX5363S = 0x1C0C, /* Lucent Technologies */
  // CUSEEME = 0x1F03, /* CUSeeMe */
  // NTCSOFT_ALF2CM_ACM = 0x1FC4, /* NTCSoft */
  // DVM = 0x2000, /* FAST Multimedia AG */
  // DTS2 = 0x2001,
  // MAKEAVIS = 0x3313,
  // DIVIO_MPEG4_AAC = 0x4143, /* Divio, Inc. */
  // NOKIA_ADAPTIVE_MULTIRATE = 0x4201, /* Nokia */
  // DIVIO_G726 = 0x4243, /* Divio, Inc. */
  // LEAD_SPEECH = 0x434C, /* LEAD Technologies */
  // LEAD_VORBIS = 0x564C, /* LEAD Technologies */
  // WAVPACK_AUDIO = 0x5756, /* xiph.org */
  // ALAC = 0x6C61, /* Apple Lossless */
  // OGG_VORBIS_MODE_1 = 0x674F, /* Ogg Vorbis */
  // OGG_VORBIS_MODE_2 = 0x6750, /* Ogg Vorbis */
  // OGG_VORBIS_MODE_3 = 0x6751, /* Ogg Vorbis */
  // OGG_VORBIS_MODE_1_PLUS = 0x676F, /* Ogg Vorbis */
  // OGG_VORBIS_MODE_2_PLUS = 0x6770, /* Ogg Vorbis */
  // OGG_VORBIS_MODE_3_PLUS = 0x6771, /* Ogg Vorbis */
  // F3COM_NBX = 0x7000, /* 3COM Corp. */
  // OPUS = 0x704F, /* Opus */
  // FAAD_AAC = 0x706D,
  // AMR_NB = 0x7361, /* AMR Narrowband */
  // AMR_WB = 0x7362, /* AMR Wideband */
  // AMR_WP = 0x7363, /* AMR Wideband Plus */
  // GSM_AMR_CBR = 0x7A21, /* GSMA/3GPP */
  // GSM_AMR_VBR_SID = 0x7A22, /* GSMA/3GPP */
  // COMVERSE_INFOSYS_G723_1 = 0xA100, /* Comverse Infosys */
  // COMVERSE_INFOSYS_AVQSBC = 0xA101, /* Comverse Infosys */
  // COMVERSE_INFOSYS_SBC = 0xA102, /* Comverse Infosys */
  // SYMBOL_G729_A = 0xA103, /* Symbol Technologies */
  // VOICEAGE_AMR_WB = 0xA104, /* VoiceAge Corp. */
  // INGENIENT_G726 = 0xA105, /* Ingenient Technologies, Inc. */
  // MPEG4_AAC = 0xA106, /* ISO/MPEG-4 */
  // ENCORE_G726 = 0xA107, /* Encore Software */
  // ZOLL_ASAO = 0xA108, /* ZOLL Medical Corp. */
  // SPEEX_VOICE = 0xA109, /* xiph.org */
  // VIANIX_MASC = 0xA10A, /* Vianix LLC */
  // WM9_SPECTRUM_ANALYZER = 0xA10B, /* Microsoft */
  // WMF_SPECTRUM_ANAYZER = 0xA10C, /* Microsoft */
  // GSM_610 = 0xA0D,
  // GSM_620 = 0xA1E,
  // GSM_660 = 0xA10,
  // GSM_690 = 0xA110,
  // GSM_ADAPTIVE_MULTIRATE_WB = 0xA111,
  // POLYCOM_G722 = 0xA112 ,/* Polycom */
  // POLYCOM_G728 = 0xA113, /* Polycom */
  // POLYCOM_G729_A = 0xA114, /* Polycom */
  // POLYCOM_SIREN = 0xA115, /* Polycom */
  // GLOBAL_IP_ILBC = 0xA116, /* Global IP */
  // RADIOTIME_TIME_SHIFT_RADIO = 0xA117, /* RadioTime */
  // NICE_ACA = 0xA118, /* Nice Systems */
  // NICE_ADPCM = 0xA119, /* Nice Systems */
  // VOCORD_G721 = 0xA11A, /* Vocord Telecom */
  // VOCORD_G726 = 0xA11B, /* Vocord Telecom */
  // VOCORD_G722_1 = 0xA11C, /* Vocord Telecom */
  // VOCORD_G728 = 0xA11D, /* Vocord Telecom */
  // VOCORD_G729 = 0xA11E, /* Vocord Telecom */
  // VOCORD_G729_A = 0xA11F, /* Vocord Telecom */
  // VOCORD_G723_1 = 0xA120, /* Vocord Telecom */
  // VOCORD_LBC = 0xA121, /* Vocord Telecom */
  // NICE_G728 = 0xA122, /* Nice Systems */
  // FRACE_TELECOM_G729 = 0xA123, /* France Telecom */
  // CODIAN = 0xA124, /* CODIAN */
  // FLAC = 0xF1AC, /* flac.sourceforge.net */
};

}
