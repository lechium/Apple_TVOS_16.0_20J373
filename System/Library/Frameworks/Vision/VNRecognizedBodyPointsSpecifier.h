//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNRecognizedBodyPointsSpecifier
{
    NSArray *_orderedPersonKeypoints;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000da70
- (void).cxx_destruct;	// IMP=0x000000000000d70d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d5a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d524
- (id)populatedMLMultiArrayAndReturnError:(id *)arg1;	// IMP=0x000000000000cf57
- (id)pointKeyGroupLabelsMapping;	// IMP=0x000000000000cf27
- (id)availableGroupKeys;	// IMP=0x000000000000cef7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ce5a
- (unsigned long long)hash;	// IMP=0x000000000000ce00
- (id)initWithVCPPersonObservation:(id)arg1 originatingRequestSpecifier:(id)arg2;	// IMP=0x000000000000c850

@end

