//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKQuantitySample, NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface _HKQuantitySeriesSampleQueryServerConfiguration : HKQueryServerConfiguration
{
    HKQuantitySample *_quantitySample;	// 8 = 0x8
    long long _seriesAnchor;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    NSDate *_maximumStartDate;	// 40 = 0x28
    NSUUID *_latestUUID;	// 48 = 0x30
    NSDate *_latestSampleStartDate;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000d5309
- (void).cxx_destruct;	// IMP=0x00000000000d57d3
@property(copy, nonatomic) NSDate *latestSampleStartDate; // @synthesize latestSampleStartDate=_latestSampleStartDate;
@property(copy, nonatomic) NSUUID *latestUUID; // @synthesize latestUUID=_latestUUID;
@property(copy, nonatomic) NSDate *maximumStartDate; // @synthesize maximumStartDate=_maximumStartDate;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long seriesAnchor; // @synthesize seriesAnchor=_seriesAnchor;
@property(copy, nonatomic) HKQuantitySample *quantitySample; // @synthesize quantitySample=_quantitySample;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d55a2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d5311
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d51b1

@end

