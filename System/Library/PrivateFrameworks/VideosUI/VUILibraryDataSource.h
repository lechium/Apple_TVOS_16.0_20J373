//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VUILibraryDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryDataSource : NSObject
{
    _Bool _hasCompletedInitialFetch;	// 8 = 0x8
    id <VUILibraryDataSourceDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001261dc
@property(nonatomic) _Bool hasCompletedInitialFetch; // @synthesize hasCompletedInitialFetch=_hasCompletedInitialFetch;
@property(nonatomic) __weak id <VUILibraryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;

@end

