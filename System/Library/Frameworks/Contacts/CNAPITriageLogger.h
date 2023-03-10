//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CNAPITriageLogger : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
}

+ (id)os_log;	// IMP=0x00100000001000e0
+ (id)threadEntryPoint;	// IMP=0x0010000000100058
+ (void)setThreadEntryPoint:(SEL)arg1;	// IMP=0x00100000000fff6e
- (void).cxx_destruct;	// IMP=0x0000000000100c24
@property(readonly) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)request:(id)arg1 failedWithError:(id)arg2;	// IMP=0x0000000000100bbb
- (void)request:(id)arg1 willReturnAnchor:(id)arg2;	// IMP=0x0000000000100a6d
- (void)request:(id)arg1 spentTimeInClientCode:(double)arg2;	// IMP=0x000000000010096d
- (void)didReturnAllResultsForContactFetchRequest:(id)arg1;	// IMP=0x00000000001008c2
- (void)clientStoppedEnumerationForRequest:(id)arg1;	// IMP=0x0000000000100817
- (void)request:(id)arg1 containsContact:(id)arg2;	// IMP=0x0000000000100719
- (void)request:(id)arg1 encounteredError:(id)arg2;	// IMP=0x0000000000100647
- (void)didExecuteFetchRequest:(id)arg1 duration:(double)arg2;	// IMP=0x00000000001004d5
- (void)willExecuteFetchRequest:(id)arg1;	// IMP=0x00000000001001b8
- (id)init;	// IMP=0x000000000010013c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

