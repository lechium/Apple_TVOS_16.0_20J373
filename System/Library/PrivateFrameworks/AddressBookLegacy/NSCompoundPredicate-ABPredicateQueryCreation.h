//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCompoundPredicate.h>

@interface NSCompoundPredicate (ABPredicateQueryCreation)
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(_Bool)arg2 addressBook:(void *)arg3 propertyIndices:(const struct __CFDictionary **)arg4;	// IMP=0x0090000000039545
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;	// IMP=0x00900000000393e9
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;	// IMP=0x009000000003928d
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;	// IMP=0x0090000000039131
- (void)ab_addCallbackContextToArray:(id)arg1;	// IMP=0x0090000000039011
- (_Bool)ab_hasCallback;	// IMP=0x0090000000038f8a
@end

