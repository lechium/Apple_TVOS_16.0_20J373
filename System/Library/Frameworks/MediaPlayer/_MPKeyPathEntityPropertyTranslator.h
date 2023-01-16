//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MPKeyPathEntityPropertyTranslator : NSObject
{
    NSArray *_sourceKeyPaths;	// 8 = 0x8
    CDUnknownBlockType _valueTransformBlock;	// 16 = 0x10
    CDUnknownFunctionPointerType _valueTransformFunction;	// 24 = 0x18
}

+ (id)translatorForKeyPaths:(id)arg1 valueTransformFunction:(CDUnknownFunctionPointerType)arg2;	// IMP=0x0010000000168d4b
+ (id)translatorForKeyPaths:(id)arg1 valueTransformBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000168cb9
- (void).cxx_destruct;	// IMP=0x0000000000168c91
@property(readonly, nonatomic) CDUnknownFunctionPointerType valueTransformFunction; // @synthesize valueTransformFunction=_valueTransformFunction;
@property(readonly, nonatomic) CDUnknownBlockType valueTransformBlock; // @synthesize valueTransformBlock=_valueTransformBlock;
@property(readonly, nonatomic) NSArray *sourceKeyPaths; // @synthesize sourceKeyPaths=_sourceKeyPaths;
- (id)valueFromSource:(id)arg1 context:(id)arg2;	// IMP=0x0000000000168c3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

