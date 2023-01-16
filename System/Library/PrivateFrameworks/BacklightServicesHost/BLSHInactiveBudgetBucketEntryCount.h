//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface BLSHInactiveBudgetBucketEntryCount : NSObject
{
    _Bool _secondsFidelity;	// 8 = 0x8
    int _count;	// 12 = 0xc
    NSDate *_lastEntryInitialDate;	// 16 = 0x10
    NSDate *_lastEntryFinalDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000032411
@property(readonly, nonatomic) NSDate *lastEntryFinalDate; // @synthesize lastEntryFinalDate=_lastEntryFinalDate;
@property(readonly, nonatomic) NSDate *lastEntryInitialDate; // @synthesize lastEntryInitialDate=_lastEntryInitialDate;
@property(readonly, nonatomic, getter=isSecondsFidelity) _Bool secondsFidelity; // @synthesize secondsFidelity=_secondsFidelity;
@property(readonly, nonatomic) int count; // @synthesize count=_count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000323a2
- (double)timeIntervalFromLastEntryToDate:(id)arg1;	// IMP=0x0000000000032386
- (_Bool)countSpecifier:(id)arg1 hasSecondsBudget:(_Bool)arg2 isCoalesceAllowed:(_Bool)arg3;	// IMP=0x00000000000321ae
- (id)description;	// IMP=0x0000000000032072
- (id)init;	// IMP=0x0000000000031ff6

@end

