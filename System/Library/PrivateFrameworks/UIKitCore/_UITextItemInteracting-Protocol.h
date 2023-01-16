//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/_UITextContent-Protocol.h>

@class _UITextInteractableItem;

@protocol _UITextItemInteracting <UITextInput, _UITextContent>
- (_Bool)_allowInteraction:(long long)arg1 forTextInteractableItem:(_UITextInteractableItem *)arg2;
- (_UITextInteractableItem *)_textInteractableItemAtPoint:(struct CGPoint)arg1 precision:(unsigned long long)arg2;
- (_UITextInteractableItem *)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint)arg1;
- (_Bool)_mightHaveInteractableItems;

@optional
- (_Bool)_delegatesAllowingTextItemInteractions;
- (_Bool)_allowHighlightForTextInteractableItem:(_UITextInteractableItem *)arg1;
@end

