//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSSet, NSString, SSAuthenticationContext;

@interface SetAutomaticDownloadKindsOperation : ISOperation
{
    SSAuthenticationContext *;	// 96 = 0x60
    NSString *_clientIdentifierHeader;	// 104 = 0x68
    NSSet *_downloadKinds;	// 112 = 0x70
    NSSet *_previousDownloadKinds;	// 120 = 0x78
    _Bool _runsOnlyIfKindsAreDirty;	// 128 = 0x80
    _Bool _shouldSuppressServerDialogs;	// 129 = 0x81
}

- (void)_run;	// IMP=0x002000000009a050
- (_Bool)_postDownloadKinds:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000099a9d
- (_Bool)_isFatalError:(id)arg1;	// IMP=0x0010000000099a8d
- (id)_copyFilteredDownloadKinds;	// IMP=0x001000000009981d
- (id)uniqueKey;	// IMP=0x0010000000099810
- (_Bool)shouldFailAfterUniquePredecessorError:(id)arg1;	// IMP=0x00100000000997fe
- (void)run;	// IMP=0x0010000000099658
@property _Bool shouldSuppressServerDialogs;
@property _Bool runsOnlyIfKindsAreDirty;
@property(copy) NSSet *previousDownloadKinds;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSSet *downloadKinds;
- (void)dealloc;	// IMP=0x0010000000099291
- (id)initWithDownloadKinds:(id)arg1;	// IMP=0x0010000000099233

@end

