//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSArray, NSObject, NSString, REElement;
@protocol OS_dispatch_queue;

@protocol REElementDataSourceDelegate <NSObject>
- (void)invalidateElementsInSection:(NSString *)arg1;
- (void)fetchElementWithIdentifierVisible:(NSString *)arg1 withHandler:(void (^)(_Bool))arg2;
- (_Bool)hasElementWithId:(NSString *)arg1 inSectionWithIdentifier:(NSString *)arg2;
- (void)refreshElement:(REElement *)arg1;
- (void)removeElementsWithIds:(NSArray *)arg1;
- (void)reloadElement:(REElement *)arg1;
- (void)addElements:(NSArray *)arg1 toSectionWithIdentifier:(NSString *)arg2;
- (void)invalidateElements;
- (NSObject<OS_dispatch_queue> *)elementOperationQueue;

@optional
- (_Bool)hasElementWithId:(NSString *)arg1 inSection:(unsigned long long)arg2;
- (void)removeElements:(NSArray *)arg1 fromSection:(unsigned long long)arg2;
- (void)addElements:(NSArray *)arg1 toSection:(unsigned long long)arg2;
@end

