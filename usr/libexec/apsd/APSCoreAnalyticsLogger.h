//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APSCoreAnalyticsLogger : NSObject
{
    NSString *_domain;	// 8 = 0x8
}

+ (id)logger;	// IMP=0x00200000000553fd
- (void).cxx_destruct;	// IMP=0x00200000000556e8
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)logMetric:(id)arg1;	// IMP=0x00100000000554d7
- (id)initWithDomain:(id)arg1;	// IMP=0x001000000005546c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

