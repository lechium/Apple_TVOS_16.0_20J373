//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAnnounceNotificationRequest, AFQueue, NSMutableDictionary;

@interface ADExternalNotificationRequestQueue : NSObject
{
    ADAnnounceNotificationRequest *_currentRequest;	// 8 = 0x8
    AFQueue *_queuedNotificationRequestIdentifiers;	// 16 = 0x10
    NSMutableDictionary *_queuedRequestMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001208ad
@property(retain, nonatomic) ADAnnounceNotificationRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (unsigned long long)_numberOfNotificationRequests;	// IMP=0x001000000012074e
- (unsigned long long)_numberOfThreads;	// IMP=0x0010000000120706
- (void)fetchUnreadNotificationsFromThreadAfterNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000120268
- (_Bool)removeAnnouncementRequest:(id)arg1;	// IMP=0x001000000011ff53
- (id)notificationRequestForNotificationIdentifierInAnnouncementQueue:(id)arg1;	// IMP=0x001000000011fb69
- (_Bool)_isAnnounceNotificationRequest:(id)arg1 equalToRequest:(id)arg2;	// IMP=0x001000000011f9aa
- (void)clearRequestQueue;	// IMP=0x001000000011f785
- (void)completeCurrentRequestWithSuccess:(_Bool)arg1 forReason:(long long)arg2 shouldEmitInstrumentationEvent:(_Bool)arg3;	// IMP=0x001000000011f4d2
- (id)nextAnnouncementRequest;	// IMP=0x001000000011f053
- (void)enqueueAnnouncementRequest:(id)arg1;	// IMP=0x001000000011eac9
- (long long)_lastRequestAnnouncementTypeInQueue;	// IMP=0x001000000011ea1f
- (id)_lastRequestIdentifierInQueue;	// IMP=0x001000000011e9e8
- (id)init;	// IMP=0x001000000011e973
- (id)_identifierForNotificationRequest:(id)arg1;	// IMP=0x001000000011e881

@end

