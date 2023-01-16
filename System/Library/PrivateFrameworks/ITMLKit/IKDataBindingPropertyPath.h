//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface IKDataBindingPropertyPath
{
    NSString *_string;	// 8 = 0x8
    NSArray *_accessorSequence;	// 16 = 0x10
}

+ (id)pathStringForAccessorSequence:(id)arg1;	// IMP=0x00600000000c305e
- (void).cxx_destruct;	// IMP=0x00000000000c3add
@property(readonly, copy, nonatomic) NSArray *accessorSequence; // @synthesize accessorSequence=_accessorSequence;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)_initWithAccessorSequence:(id)arg1;	// IMP=0x00000000000c39ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c394a
- (unsigned long long)hash;	// IMP=0x00000000000c3906
- (id)propertyPathByRemovingFirstAccessor;	// IMP=0x00000000000c3855
- (id)propertyPathByCombiningAccessorSequence:(id)arg1;	// IMP=0x00000000000c3784
- (id)initWithAccessorSequence:(id)arg1;	// IMP=0x00000000000c36c8
- (id)initWithString:(id)arg1;	// IMP=0x00000000000c323d

@end
