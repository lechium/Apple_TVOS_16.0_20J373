//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSURLSessionTaskDependencyDescription;

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject
{
    NSURLSessionTaskDependencyDescription *dependencyDescription;	// 8 = 0x8
    NSMutableArray *children;	// 16 = 0x10
    NSMutableArray *childrenResourceIdentifiers;	// 24 = 0x18
    NSNumber *rootParentStreamID;	// 32 = 0x20
    NSMutableDictionary *_dependentToParentStreamIDs;	// 40 = 0x28
    NSMutableDictionary *_parentToParentStreamIDs;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x00000000001b94bd
- (id)init;	// IMP=0x00000000001b945d

@end

