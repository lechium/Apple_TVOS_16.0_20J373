//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADDeviceSyncCommandPullSnapshotRequest : NSObject
{
    NSString *_dataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000086901
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000086692
- (void).cxx_destruct;	// IMP=0x00100000000869c3
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000086996
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000086909
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000868f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000086853
- (unsigned long long)hash;	// IMP=0x001000000008683d
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000867b7
- (id)description;	// IMP=0x00100000000867a3
- (id)initWithDataType:(id)arg1;	// IMP=0x00100000000866f3
- (id)init;	// IMP=0x00100000000866df
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000008659e
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000086ac9

@end
