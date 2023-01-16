//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADUnavailableAlarmStore : NSObject
{
}

- (void)dismissAlarmsWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002000000013918c
- (void)fetchAlarmsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000013911e
- (void)fetchAlarmsMeetingCriteria:(id)arg1 searchOptions:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001390b0
- (void)fetchAlarmsMatchingAnyOfQueries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000139042
- (void)updateAlarms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000138fda
- (void)deleteAlarmsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000138f74
- (void)addAlarm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000138f0c
- (id)_createUnavailableError;	// IMP=0x0010000000138eee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

