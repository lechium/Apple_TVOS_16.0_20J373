//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCHardwareSettingsProtocol-Protocol.h>

@class NSString;

@protocol VCHardwareSettingsMacProtocol <VCHardwareSettingsProtocol>
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
@property(readonly, nonatomic) _Bool isMacmini;
@property(readonly, nonatomic) _Bool isIMac;
@property(readonly, nonatomic) _Bool isMacPro;
@property(readonly, nonatomic) _Bool isMacBookWVGA;
@property(readonly, nonatomic) _Bool supportsAVFCapture;
@property(readonly, nonatomic) _Bool canDoHEVC;
@property(readonly, nonatomic) _Bool supports1080pDecoding;
@property(readonly, nonatomic) _Bool supports1080pEncoding;
@property(readonly, nonatomic) _Bool canDoHiDefDecoding;
@property(readonly, nonatomic) _Bool canDoHiDefEncoding;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@end
