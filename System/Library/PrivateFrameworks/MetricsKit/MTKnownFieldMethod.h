//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTKnownFieldMethod : NSObject
{
    CDUnknownFunctionPointerType _imp;	// 8 = 0x8
    SEL _accessor;	// 16 = 0x10
}

@property(nonatomic) SEL accessor; // @synthesize accessor=_accessor;
@property(nonatomic) CDUnknownFunctionPointerType imp; // @synthesize imp=_imp;
- (id)initWithIMP:(CDUnknownFunctionPointerType)arg1 accessor:(SEL)arg2;	// IMP=0x000000000000b828

@end

