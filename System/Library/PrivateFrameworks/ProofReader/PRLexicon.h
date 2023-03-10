//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRLexicon : NSObject
{
    NSString *_localization;	// 8 = 0x8
    NSString *_unigramsPath;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    const void *_lexicon;	// 32 = 0x20
}

+ (id)lexiconWithName:(id)arg1 words:(id)arg2;	// IMP=0x0060000000062cd1
+ (id)lexiconWithLexicon:(const void *)arg1;	// IMP=0x0060000000062ca2
+ (id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2;	// IMP=0x0060000000062c6e
- (void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000006345e
- (void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000633f9
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000063394
- (_Bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double *)arg2;	// IMP=0x00000000000631e3
- (_Bool)getProbabilityForString:(id)arg1 probability:(double *)arg2;	// IMP=0x0000000000063002
- (id)stringForTokenID:(unsigned int)arg1;	// IMP=0x0000000000062fc4
- (unsigned int)tokenIDForString:(id)arg1;	// IMP=0x0000000000062ed8
- (void)enumerateEntriesForString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062e82
- (id)createCursor;	// IMP=0x0000000000062e54
- (struct _LXLexicon *)lexicon;	// IMP=0x0000000000062e4a
@property(readonly) NSString *name;
- (void)dealloc;	// IMP=0x0000000000062de1
- (id)description;	// IMP=0x0000000000062d05
- (id)initWithName:(id)arg1 words:(id)arg2;	// IMP=0x0000000000062a3e
- (id)initWithLexicon:(const void *)arg1;	// IMP=0x00000000000629d5
- (id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2;	// IMP=0x0000000000062863

@end

