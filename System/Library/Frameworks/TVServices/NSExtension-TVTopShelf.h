//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@interface NSExtension (TVTopShelf)
- (id)_tvs_allObservers;	// IMP=0x0090000000014c96
- (id)_tvs_observers;	// IMP=0x0090000000014c85
- (void)_tvs_notifyObserversRequestInterrupted:(id)arg1;	// IMP=0x0090000000014a3d
- (void)_tvs_notifyObserversRequest:(id)arg1 didCancelWithError:(id)arg2;	// IMP=0x00900000000147d3
- (void)_tvs_notifyObserversRequest:(id)arg1 didCompleteWithItems:(id)arg2;	// IMP=0x0090000000014569
- (void)tvs_startObservingRequests;	// IMP=0x00900000000141af
- (void)tvs_removeObserver:(id)arg1;	// IMP=0x009000000001405f
- (void)tvs_addObserver:(id)arg1;	// IMP=0x0090000000013f0f
@end

