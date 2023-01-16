//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ASCMetricsActivity : NSObject
{
    NSDictionary *_fields;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001441b
+ (id)defaultFields;	// IMP=0x00100000000141fb
- (void).cxx_destruct;	// IMP=0x0020000000014a2e
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (id)metricsActivityByRemovingValueForKey:(id)arg1;	// IMP=0x001000000001496e
- (id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000148a1
- (id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000147cd
- (id)description;	// IMP=0x001000000001472f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000014629
- (unsigned long long)hash;	// IMP=0x00100000000145ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000145a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001452a
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000014423
- (id)init;	// IMP=0x0010000000014402
- (id)initWithFields:(id)arg1;	// IMP=0x0010000000014335

@end

