//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (AXConstraintBasedLayout)
- (void)ax_setContentHuggingAndCompressionResistance:(CDStruct_818bb265)arg1;	// IMP=0x006000000000a900
- (id)ax_pinConstraintsInAllDimensionsToView:(id)arg1;	// IMP=0x006000000000a700
- (id)ax_firstCommonAncestorWithView:(id)arg1;	// IMP=0x006000000000a4d0
- (unsigned long long)_ax_depth;	// IMP=0x006000000000a440
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;	// IMP=0x006000000000a290
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;	// IMP=0x006000000000a1d0
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;	// IMP=0x006000000000a110
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;	// IMP=0x006000000000a060
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000009fa0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000009f00
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000009e50
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000009db0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;	// IMP=0x0060000000009d30
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000009cd0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000009c80
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000009be0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000009b60
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000009ad0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000009a50
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;	// IMP=0x00600000000099e0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000009990
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000009940
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000009880
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x00600000000097d0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000009710
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000009670
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;	// IMP=0x00600000000095f0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000009590
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000009540
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x00600000000094a0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000009420
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000009390
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000009310
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;	// IMP=0x00600000000092a0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000009250
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000009200
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000009140
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000009090
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;	// IMP=0x0060000000009000
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000008f50
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000008ec0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;	// IMP=0x0060000000008e30
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;	// IMP=0x0060000000008db0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000008d50
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;	// IMP=0x0060000000008d00
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000008c60
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000008be0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;	// IMP=0x0060000000008b70
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000008ae0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000008a60
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;	// IMP=0x00600000000089e0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;	// IMP=0x0060000000008970
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000008920
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;	// IMP=0x00600000000088d0
@end

