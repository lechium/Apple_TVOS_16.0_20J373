//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNMultiValuePropertyDescription.h>

@interface CNMultiValuePropertyDescription (ABSExtentions)
- (_Bool)isABSLabeledValueValue:(id)arg1 equalToValue:(id)arg2;	// IMP=0x006000000000dc07
- (CDUnknownBlockType)passThroughMultivalueTransformWithLabelMapping:(id)arg1;	// IMP=0x006000000000dbf3
- (CDUnknownBlockType)dictionaryBasedMultiValueTransformWithLabelMapping:(id)arg1 inputKeys:(id)arg2 destinationClass:(Class)arg3 valueMapping:(id)arg4;	// IMP=0x006000000000d8d2
- (CDUnknownBlockType)multiValueTransformWithLabelMapping:(id)arg1 valueTransform:(CDUnknownBlockType)arg2;	// IMP=0x006000000000d6c2
- (CDUnknownBlockType)ABSMultiValueLabeledValueFromCNLabeledValueTransform;	// IMP=0x006000000000d65c
- (CDUnknownBlockType)CNLabeledValueFromABSMultiValueTranform;	// IMP=0x006000000000d5f6
- (id)CNValueFromABSValue:(void *)arg1;	// IMP=0x006000000000d573
- (const void *)ABSValueFromCNValue:(id)arg1;	// IMP=0x006000000000d426
@end

