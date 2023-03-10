//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryTriageLogger : NSObject
{
    unsigned char _defaultLogType;	// 8 = 0x8
    unsigned char _destructiveLogType;	// 9 = 0x9
    NSObject<OS_os_log> *_os_log;	// 16 = 0x10
}

+ (id)log;	// IMP=0x00000000000570e5
+ (id)fetchLogger;	// IMP=0x0000000000057004
+ (id)saveLogger;	// IMP=0x0000000000056f26
- (void).cxx_destruct;	// IMP=0x0000000000058b13
@property(readonly) unsigned char destructiveLogType; // @synthesize destructiveLogType=_destructiveLogType;
@property(readonly) unsigned char defaultLogType; // @synthesize defaultLogType=_defaultLogType;
@property(readonly) NSObject<OS_os_log> *os_log; // @synthesize os_log=_os_log;
- (void)visitDifferentMeCardEvent:(id)arg1;	// IMP=0x0000000000058a22
- (void)visitPreferredContactForImageEvent:(id)arg1;	// IMP=0x0000000000058935
- (void)visitPreferredContactForNameEvent:(id)arg1;	// IMP=0x0000000000058848
- (void)visitUnlinkContactEvent:(id)arg1;	// IMP=0x000000000005875b
- (void)visitLinkContactsEvent:(id)arg1;	// IMP=0x0000000000058600
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;	// IMP=0x00000000000584a5
- (void)visitAddSubgroupToGroupEvent:(id)arg1;	// IMP=0x000000000005834a
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;	// IMP=0x00000000000581ef
- (void)visitAddMemberToGroupEvent:(id)arg1;	// IMP=0x0000000000058094
- (void)visitDeleteGroupEvent:(id)arg1;	// IMP=0x0000000000057fcb
- (void)visitUpdateGroupEvent:(id)arg1;	// IMP=0x0000000000057ede
- (void)visitAddGroupEvent:(id)arg1;	// IMP=0x0000000000057cee
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x0000000000057c25
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x0000000000057b38
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x0000000000057948
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x00000000000578f6
- (void)fetchDidFailToTranslateWithError:(id)arg1;	// IMP=0x00000000000578b0
- (void)fetchDidFailWithError:(id)arg1;	// IMP=0x000000000005786a
- (void)didFetchHistoryEventsCount:(long long)arg1 anchor:(id)arg2 truncated:(_Bool)arg3;	// IMP=0x000000000005775f
- (void)didFetchHistoryEvents:(id)arg1 anchor:(id)arg2;	// IMP=0x0000000000057561
- (void)willFetchHistoryWithRequest:(id)arg1;	// IMP=0x00000000000572c8
- (void)didExecuteSaveRequest;	// IMP=0x0000000000057276
- (void)willExecuteSaveRequest;	// IMP=0x0000000000057224
- (id)initWithOSLog:(id)arg1 defaultLogType:(unsigned char)arg2 destructiveLogType:(unsigned char)arg3;	// IMP=0x0000000000057190
- (id)init;	// IMP=0x0000000000057141

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

