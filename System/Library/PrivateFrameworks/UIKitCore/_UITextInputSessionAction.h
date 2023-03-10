//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UITextInputSessionBeganAction, _UITextInputSessionDeletionAction, _UITextInputSessionDictationBeganAction, _UITextInputSessionInsertionAction, _UITextInputSessionRedoAction, _UITextInputSessionReplaceWithCandidateAction, _UITextInputSessionSelectionAction, _UITextInputSessionUndoAction;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionAction : NSObject
{
    long long _source;	// 8 = 0x8
    struct _NSRange _relativeRangeBefore;	// 16 = 0x10
}

@property(nonatomic) struct _NSRange relativeRangeBefore; // @synthesize relativeRangeBefore=_relativeRangeBefore;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool changedContent;
- (long long)mergeActionIfPossible:(id)arg1;	// IMP=0x0000000000f04530
@property(readonly, nonatomic) _UITextInputSessionReplaceWithCandidateAction *asReplaceWithCandidates;
@property(readonly, nonatomic) _UITextInputSessionDictationBeganAction *asDictationBegan;
@property(readonly, nonatomic) _UITextInputSessionRedoAction *asRedo;
@property(readonly, nonatomic) _UITextInputSessionUndoAction *asUndo;
@property(readonly, nonatomic) _UITextInputSessionSelectionAction *asSelection;
@property(readonly, nonatomic) _UITextInputSessionDeletionAction *asDeletion;
@property(readonly, nonatomic) _UITextInputSessionInsertionAction *asInsertion;
@property(readonly, nonatomic) _UITextInputSessionBeganAction *asBegan;

@end

