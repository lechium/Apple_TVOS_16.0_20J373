//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoundAnalysis/NSObject-Protocol.h>

@class SNAudioConfiguration;
@protocol SNRequest, SNResultsObservingXPCProtocol;

@protocol SNSystemAudioAnalyzerXPCProtocol <NSObject>
- (void)xpcSetAudioConfiguration:(SNAudioConfiguration *)arg1 completionHandler:(void (^)(void))arg2;
- (void)xpcRemoveAllRequestsWithCompletionHandler:(void (^)(void))arg1;
- (void)xpcRemoveRequest:(id <SNRequest>)arg1 completionHandler:(void (^)(void))arg2;
- (void)xpcAddRequest:(id <SNRequest>)arg1 withObserver:(id <SNResultsObservingXPCProtocol>)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

