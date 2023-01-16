//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCAudioStreamGroupCommonConfig, VCSystemAudioCaptureSession;

__attribute__((visibility("hidden")))
@interface VCAudioStreamSendGroupConfig
{
    VCAudioStreamGroupCommonConfig *_audioStreamGroupConfig;	// 8 = 0x8
    _Bool _shouldScheduleMediaQueue;	// 16 = 0x10
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;	// 24 = 0x18
}

@property(nonatomic) _Bool shouldScheduleMediaQueue; // @synthesize shouldScheduleMediaQueue=_shouldScheduleMediaQueue;
@property(retain, nonatomic) VCSystemAudioCaptureSession *systemAudioCaptureSession; // @synthesize systemAudioCaptureSession=_systemAudioCaptureSession;
@property(retain) VCAudioStreamGroupCommonConfig *audioStreamGroupConfig; // @synthesize audioStreamGroupConfig=_audioStreamGroupConfig;
- (void)dealloc;	// IMP=0x00000000000d4141
- (id)init;	// IMP=0x00000000000d4071

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

