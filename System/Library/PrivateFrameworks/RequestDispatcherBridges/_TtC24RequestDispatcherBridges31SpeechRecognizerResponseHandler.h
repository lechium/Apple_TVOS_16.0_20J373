//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC24RequestDispatcherBridges31SpeechRecognizerResponseHandler : NSObject
{
    MISSING_TYPE *requestId;	// 8 = 0x8
    MISSING_TYPE *messagePublisher;	// 24 = 0x18
    MISSING_TYPE *serviceHelper;	// 64 = 0x40
    MISSING_TYPE *instrumentationUtil;	// 72 = 0x48
    MISSING_TYPE *assistantId;	// 80 = 0x50
    MISSING_TYPE *sessionId;	// 1176912 = 0x11f550
}

- (void).cxx_destruct;	// IMP=0x00000000000b8e60
- (id)init;	// IMP=0x00000000000b8e00
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultCandidateWithRequestId:(id)arg2 speechPackage:(id)arg3;	// IMP=0x00000000000b8dd0
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;	// IMP=0x00000000000b8da0
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4 metadata:(id)arg5;	// IMP=0x00000000000b8d70
- (void)localSpeechRecognizerClient:(id)arg1 receivedVoiceIdScoreCard:(id)arg2;	// IMP=0x00000000000b8d40
- (void)localSpeechRecognizerClient:(id)arg1 didAcceptedEagerResultWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 mitigationSignal:(_Bool)arg4 featuresToLog:(id)arg5;	// IMP=0x00000000000b8d10
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;	// IMP=0x00000000000b8ce0
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;	// IMP=0x00000000000b8cb0

@end

