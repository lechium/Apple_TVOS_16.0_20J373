//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (PKArrayAdditions)
+ (id)pk_FilteredCardErrors:(id)arg1;	// IMP=0x005000000022ee56
+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2;	// IMP=0x005000000022e9fc
+ (id)pk_FilteredBillingErrorsForContactFields:(id)arg1 errors:(id)arg2;	// IMP=0x005000000022e60c
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;	// IMP=0x005000000022e5f3
+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x005000000022e5da
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x005000000022e5c1
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x005000000022e5a8
- (id)pk_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000006eb52
- (_Bool)pk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000006ea8f
- (id)pk_intersectArray:(id)arg1;	// IMP=0x001000000006e9d4
- (id)pk_groupDictionaryByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006e79e
- (id)pk_indexDictionaryByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006e5ec
- (unsigned long long)pk_countObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000006e4e1
- (id)pk_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000006e482
- (id)pk_shuffledArray;	// IMP=0x001000000006e3c1
- (id)pk_createMutableOrderedSetByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006e1c0
- (id)pk_createOrderedSetByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006e137
- (id)pk_createMutableSetByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006df36
- (id)pk_createSetByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006dead
- (id)pk_arrayBySafelyApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006de93
- (id)pk_arrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006de79
- (id)pk_createArrayBySafelyApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006dc59
- (id)pk_createArrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006da3d
- (id)pk_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x001000000006d9b8
- (id)pk_arrayByRemovingObject:(id)arg1;	// IMP=0x001000000006d946
- (id)stringSetValue;	// IMP=0x0010000000498bea
- (id)stringArrayValue;	// IMP=0x0010000000498b83
- (id)nonZeroUnsignedLongLongSetValue;	// IMP=0x0010000000498b23
- (id)nonZeroUnsignedLongLongArrayValue;	// IMP=0x0010000000498a49
- (id)deepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004989c7
- (id)jsonString;	// IMP=0x00100000004988a3
@end
