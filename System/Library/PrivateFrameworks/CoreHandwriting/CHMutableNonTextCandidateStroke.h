//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHNonTextCandidateStroke.h"

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke
{
}

- (id)description;	// IMP=0x00000000000767b0
- (_Bool)_adjustSupportForContainerClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x0000000000076060
- (_Bool)_adjustSupportForLineClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x0000000000075670
- (_Bool)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x00000000000754b0
- (_Bool)adjustSupportByRemovingStrokeIdentifier:(id)arg1;	// IMP=0x0000000000075490
- (_Bool)_removeSupportForStrokeIdentifier:(id)arg1;	// IMP=0x00000000000753d0
- (void)_setSupportForStrokeIdentifier:(id)arg1 support:(double)arg2;	// IMP=0x0000000000075300
@property(retain, nonatomic) NSDictionary *supportByStrokeIdentifier; // @dynamic supportByStrokeIdentifier;

@end

