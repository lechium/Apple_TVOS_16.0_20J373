//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CACodingCAMLWriterDelegate : NSObject
{
    NSString *_resourceDir;	// 8 = 0x8
    int _serial;	// 16 = 0x10
    NSString *_imageFormat;	// 24 = 0x18
    NSDictionary *_imageEncodeOptions;	// 32 = 0x20
    _Bool _skipHiddenLayers;	// 40 = 0x28
}

@property _Bool skipHiddenLayers; // @synthesize skipHiddenLayers=_skipHiddenLayers;
@property(copy) NSDictionary *imageEncodeOptions; // @synthesize imageEncodeOptions=_imageEncodeOptions;
@property(copy) NSString *imageFormat; // @synthesize imageFormat=_imageFormat;
- (_Bool)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2;	// IMP=0x0000000000021340
- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;	// IMP=0x0000000000020ff0
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;	// IMP=0x0000000000020f04
- (id)initWithResourceDir:(id)arg1;	// IMP=0x0000000000020ea2
- (void)dealloc;	// IMP=0x0000000000020e35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

