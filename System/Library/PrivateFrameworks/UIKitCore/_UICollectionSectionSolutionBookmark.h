//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutSection, _UICollectionPreferredSizes, _UICompositionalLayoutSolverSectionContainerDescriptor;
@protocol _UICollectionLayoutSectionSolver, _UIContentInsetsEnvironment;

__attribute__((visibility("hidden")))
@interface _UICollectionSectionSolutionBookmark : NSObject
{
    id <_UICollectionLayoutSectionSolver> _solution;	// 8 = 0x8
    NSCollectionLayoutSection *_section;	// 16 = 0x10
    struct CGRect _globalFrame;	// 24 = 0x18
    struct CGRect _globalPinningFrame;	// 56 = 0x38
    id <_UIContentInsetsEnvironment> _insetEnvironment;	// 88 = 0x58
    id <_UIContentInsetsEnvironment> _supplementaryInsetEnvironment;	// 96 = 0x60
    struct CGSize _contentSize;	// 104 = 0x68
    _UICollectionPreferredSizes *_preferredSizes;	// 120 = 0x78
    _UICompositionalLayoutSolverSectionContainerDescriptor *_memoizedContainerDescriptor;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000026b496
- (id)description;	// IMP=0x000000000026b3a9

@end

