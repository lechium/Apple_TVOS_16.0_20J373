//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface MIStashMetadata : NSObject
{
    NSDate *_dateStashed;	// 8 = 0x8
    NSDate *_dateOriginallyInstalled;	// 16 = 0x10
}

+ (id)metadataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001421d
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000013d23
- (void).cxx_destruct;	// IMP=0x0000000000014823
@property(retain, nonatomic) NSDate *dateOriginallyInstalled; // @synthesize dateOriginallyInstalled=_dateOriginallyInstalled;
@property(retain, nonatomic) NSDate *dateStashed; // @synthesize dateStashed=_dateStashed;
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014581
- (id)description;	// IMP=0x0000000000014154
- (unsigned long long)hash;	// IMP=0x00000000000140c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013f8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013ee0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013df4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013d2b

@end

