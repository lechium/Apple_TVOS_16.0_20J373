//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIDictationStreamingOperations : NSObject
{
    double _timeAfterInsertion;	// 8 = 0x8
    double _timeAfterSelectRange;	// 16 = 0x10
    id <UITextInput> _document;	// 24 = 0x18
    NSMutableArray *_operations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000098baf7
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (unsigned long long)selectionChangeDelta;	// IMP=0x000000000098b99c
- (_Bool)isNotEmpty;	// IMP=0x000000000098b954
- (_Bool)isEmpty;	// IMP=0x000000000098b90c
- (void)willEndEditingInInputDelegate:(id)arg1;	// IMP=0x000000000098b7e5
- (void)pushReplaceSelectionWithText:(id)arg1;	// IMP=0x000000000098b5e0
- (void)_performReplaceSelectedText:(id)arg1;	// IMP=0x000000000098b485
- (void)pushInsertTextForSpeech:(id)arg1;	// IMP=0x000000000098b2a1
- (void)pushSelectRangeForSpeech:(struct _NSRange)arg1;	// IMP=0x000000000098b0d0
- (void)dictationWillBeginInDocument:(id)arg1;	// IMP=0x000000000098b0be
- (void)setDocument:(id)arg1;	// IMP=0x000000000098b06b
- (void)performSelectRangeForSpeech:(struct _NSRange)arg1;	// IMP=0x000000000098af68
- (void)pushSpeechOperationWithSelectionChangeDelta:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000098aec0
- (void)pushSpeechOperation:(id)arg1;	// IMP=0x000000000098ae4e
- (void)popAndInvoke;	// IMP=0x000000000098ad9b
- (double)delayAfterSelector:(SEL)arg1;	// IMP=0x000000000098acce
- (id)pop;	// IMP=0x000000000098abfd
- (_Bool)hasOperations;	// IMP=0x000000000098abb5
- (void)clearOperations;	// IMP=0x000000000098ab4c
- (id)init;	// IMP=0x000000000098aaaf

@end

