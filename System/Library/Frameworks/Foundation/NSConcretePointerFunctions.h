//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPointerFunctions.h"

__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions
{
    struct NSSlice slice;	// 8 = 0x8
}

+ (_Bool)initializeSlice:(struct NSSlice *)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x006000000052ba88
+ (void)initializeBackingStore:(struct NSSlice *)arg1 sentinel:(_Bool)arg2 dynamic:(_Bool)arg3;	// IMP=0x006000000052b9fa
- (_Bool)usesWeakReadAndWriteBarriers;	// IMP=0x000000000052c292
- (_Bool)usesStrongWriteBarrier;	// IMP=0x000000000052c27e
- (CDUnknownFunctionPointerType)relinquishFunction;	// IMP=0x000000000052c268
- (CDUnknownFunctionPointerType)acquireFunction;	// IMP=0x000000000052c252
- (CDUnknownFunctionPointerType)descriptionFunction;	// IMP=0x000000000052c23c
- (CDUnknownFunctionPointerType)isEqualFunction;	// IMP=0x000000000052c226
- (CDUnknownFunctionPointerType)hashFunction;	// IMP=0x000000000052c210
- (CDUnknownFunctionPointerType)sizeFunction;	// IMP=0x000000000052c1fa
- (void)setUsesWeakReadAndWriteBarriers:(_Bool)arg1;	// IMP=0x000000000052c1e2
- (void)setUsesStrongWriteBarrier:(_Bool)arg1;	// IMP=0x000000000052c1ca
- (void)setRelinquishFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000052c1b4
- (void)setAcquireFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000052c19e
- (void)setDescriptionFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000052c188
- (void)setIsEqualFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000052c16d
- (void)setHashFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000052c152
- (void)setSizeFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000052c13c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052c130
- (unsigned long long)hash;	// IMP=0x000000000052c127
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052c0f0
- (void)dealloc;	// IMP=0x000000000052c08d
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x000000000052bfd9
- (id)init;	// IMP=0x000000000052bfc5

@end

