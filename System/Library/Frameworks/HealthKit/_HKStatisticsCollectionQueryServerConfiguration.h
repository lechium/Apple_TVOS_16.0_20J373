//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKStatisticsCollectionCacheSettings, NSDate, NSDateComponents, NSDateInterval;

__attribute__((visibility("hidden")))
@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_anchorDate;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    NSDateComponents *_intervalComponents;	// 24 = 0x18
    unsigned long long _mergeStrategy;	// 32 = 0x20
    NSDateInterval *_dateInterval;	// 40 = 0x28
    HKStatisticsCollectionCacheSettings *_cacheSettings;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001d0bb8
- (void).cxx_destruct;	// IMP=0x00000000001d0f41
@property(copy, nonatomic) HKStatisticsCollectionCacheSettings *cacheSettings; // @synthesize cacheSettings=_cacheSettings;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d0d5f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d0bc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d0ae2

@end

