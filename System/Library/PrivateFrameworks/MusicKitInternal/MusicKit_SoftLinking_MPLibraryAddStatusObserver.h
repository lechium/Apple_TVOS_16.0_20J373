//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPLibraryAddStatusObserver, MusicKit_SoftLinking_MPModelObject;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPLibraryAddStatusObserver : NSObject
{
    MPLibraryAddStatusObserver *_underlyingLibraryAddStatusObserver;	// 8 = 0x8
    MusicKit_SoftLinking_MPModelObject *_identifyingModelObject;	// 16 = 0x10
    CDUnknownBlockType _statusBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000076b2
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *identifyingModelObject; // @synthesize identifyingModelObject=_identifyingModelObject;
- (long long)_libraryAddStatusFromUnderlyingStatus:(long long)arg1;	// IMP=0x000000000000767b
- (void)_handleUpdatedUnderlyingLibraryAddStatus:(long long)arg1;	// IMP=0x0000000000007646
@property(readonly, nonatomic) long long currentStatus;
- (id)initWithIdentifyingModelObject:(id)arg1;	// IMP=0x0000000000007234

@end

