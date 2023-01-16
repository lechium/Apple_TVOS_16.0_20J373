//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSOpportuneSpeakListener;

@protocol CSOpportuneSpeakListenerDelegate <NSObject>

@optional
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 didStopUnexpectly:(_Bool)arg2;
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 hasVADAvailable:(_Bool)arg2 withHostTime:(float)arg3;
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 hasVADAvailable:(_Bool)arg2;
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 hasRemoteVADAvailable:(_Bool)arg2;
@end

