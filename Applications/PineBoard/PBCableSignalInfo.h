//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate;

@interface PBCableSignalInfo : NSObject
{
    int _linkQuality;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    double _cableCheckTime;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000011d35a
+ (MISSING_TYPE *)currentInfoWithLastCableCheckTime: /* Error: Ran out of types for this method. */;	// IMP=0x001000000011d234
+ (int)_linkQuality;	// IMP=0x001000000011d229
- (void).cxx_destruct;	// IMP=0x002000000011d929
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) double cableCheckTime; // @synthesize cableCheckTime=_cableCheckTime;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;	// IMP=0x001000000011d7bf
- (unsigned long long)hash;	// IMP=0x001000000011d70f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011d5de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011d54c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000011d490
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000011d362
@property(readonly, nonatomic) long long cableStatus;
- (id)initWithDate:(id)arg1 cableCheckTime:(double)arg2 linkQuality:(int)arg3;	// IMP=0x001000000011d2c2

@end

