//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVPixelBufferAttributeMediator : NSObject
{
    struct OpaqueVTPixelBufferAttributesMediator *_mediator;	// 8 = 0x8
}

- (id)mediatedPixelBufferAttributes;	// IMP=0x000000000011ee62
- (void)setLayersAreSuppressed:(_Bool)arg1;	// IMP=0x000000000011ee33
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg1;	// IMP=0x000000000011edef
- (void)setRequestedPixelBufferAttributes:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000011ed85
- (void)dealloc;	// IMP=0x000000000011ed18
- (id)init;	// IMP=0x000000000011ec25

@end

