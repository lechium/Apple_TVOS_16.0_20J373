//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JEMetricsDataPredicate, JETreatmentAction, NSDictionary;

__attribute__((visibility("hidden")))
@interface JETreatment : NSObject
{
    JEMetricsDataPredicate *_predicate;	// 8 = 0x8
    JETreatmentAction *_eventAction;	// 16 = 0x10
    NSDictionary *_fieldActions;	// 24 = 0x18
}

+ (id)treatmentWithConfiguration:(id)arg1 topic:(id)arg2;	// IMP=0x006000000002b809
- (void).cxx_destruct;	// IMP=0x000000000002bff0
- (id)performTreatment:(id)arg1;	// IMP=0x000000000002bc19
- (id)initWithConfigDictionary:(id)arg1 topic:(id)arg2;	// IMP=0x000000000002b8cc

@end

