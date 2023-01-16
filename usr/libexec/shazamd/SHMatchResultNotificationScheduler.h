//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, SHAttribution, SHMatchedMediaItem;
@protocol SHMatchResultNotificationContentDeliverer, SHWorkerDelegate;

@interface SHMatchResultNotificationScheduler : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    id <SHWorkerDelegate> _workerDelegate;	// 16 = 0x10
    SHMatchedMediaItem *_currentMediaItem;	// 24 = 0x18
    NSUUID *_currentSignatureID;	// 32 = 0x20
    SHAttribution *_attribution;	// 40 = 0x28
    id <SHMatchResultNotificationContentDeliverer> _contentDeliverer;	// 48 = 0x30
}

+ (id)userNotificationCenter;	// IMP=0x0020000000009adf
+ (void)setUserNotificationCenter:(id)arg1;	// IMP=0x0010000000009acb
- (void).cxx_destruct;	// IMP=0x002000000000a326
@property(readonly, nonatomic) id <SHMatchResultNotificationContentDeliverer> contentDeliverer; // @synthesize contentDeliverer=_contentDeliverer;
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(retain, nonatomic) NSUUID *currentSignatureID; // @synthesize currentSignatureID=_currentSignatureID;
@property(retain, nonatomic) SHMatchedMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(readonly) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <SHWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (double)timeRequiredToPerformWork;	// IMP=0x001000000000a299
- (oneway void)stop;	// IMP=0x001000000000a293
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (void)sendMatchNotification:(id)arg1;	// IMP=0x001000000000a11b
- (void)sendAnalyticsEventForMatch:(id)arg1;	// IMP=0x0010000000009fea
- (void)sendNotificationForNoMatch;	// IMP=0x0010000000009e71
- (_Bool)canSendNotificationForNoMatchSignatureID:(id)arg1;	// IMP=0x0010000000009e04
- (void)sendNotificationForMatch:(id)arg1;	// IMP=0x0010000000009ccc
- (_Bool)canSendNotificationForMatch:(id)arg1;	// IMP=0x0010000000009bca
- (void)setIsRunning:(_Bool)arg1;	// IMP=0x0010000000009b75
- (id)initWithAttribution:(id)arg1;	// IMP=0x0010000000009af0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

