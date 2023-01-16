//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface ASCViewMetrics : NSObject
{
    NSArray *_instructions;	// 8 = 0x8
    NSDictionary *_pageFields;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001cf58
- (void).cxx_destruct;	// IMP=0x002000000001d6ef
@property(readonly, copy, nonatomic) NSDictionary *pageFields; // @synthesize pageFields=_pageFields;
@property(readonly, copy, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
- (id)dataForInvocationPoint:(id)arg1;	// IMP=0x001000000001d48a
- (id)description;	// IMP=0x001000000001d3ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001d21b
- (unsigned long long)hash;	// IMP=0x001000000001d169
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001d15e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001d0b0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001cf60
- (id)initWithInstructions:(id)arg1 pageFields:(id)arg2;	// IMP=0x001000000001ce93

@end
