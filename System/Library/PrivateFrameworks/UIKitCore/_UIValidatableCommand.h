//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICommand.h"

@class UICommandAlternate;

__attribute__((visibility("hidden")))
@interface _UIValidatableCommand : UICommand
{
    UICommand *_command;	// 112 = 0x70
    UICommandAlternate *_alternate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000ed7a7d
- (void)useCommand:(id)arg1 alternate:(id)arg2;	// IMP=0x0000000000ed7929
- (id)init;	// IMP=0x0000000000ed78c8
- (id)alternates;	// IMP=0x0000000000ed78ab
- (id)propertyList;	// IMP=0x0000000000ed788e
- (SEL)action;	// IMP=0x0000000000ed7855

@end

