//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTEditStringRow.h>

@interface PTEditStringRow (PXEditStringRow)
+ (void)_px_configureTextField:(id)arg1 withTextPlaceholder:(id)arg2 saveAction:(id)arg3 forRow:(id)arg4;	// IMP=0x0080000000230440
+ (id)px_rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 textPlaceholder:(id)arg5 textValidator:(CDUnknownBlockType)arg6 condition:(id)arg7;	// IMP=0x0080000000230276
- (void)setValue:(id)arg1;	// IMP=0x001000000022f2ec
- (void)_px_updateSaveActionFromTextField;	// IMP=0x001000000022f2b9
- (void)_px_setEditStringRowTextFieldAction:(CDUnknownBlockType)arg1;	// IMP=0x001000000022f274
- (CDUnknownBlockType)_px_editStringRowTextFieldAction;	// IMP=0x001000000022f236
- (id)_px_validatedTextFromText:(id)arg1;	// IMP=0x001000000022f192
- (void)_px_setEditStringRowTextValidationAction:(CDUnknownBlockType)arg1;	// IMP=0x001000000022f14d
- (CDUnknownBlockType)_px_editStringRowTextValidationAction;	// IMP=0x001000000022f10f
@end

