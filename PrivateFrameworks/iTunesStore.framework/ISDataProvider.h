/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, SSAuthenticationContext, NSString, NSNumber, SSURLBagContext;

@interface ISDataProvider : NSObject <NSCopying> {
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    NSURL *_redirectURL;
}

@property(retain) SSAuthenticationContext * authenticationContext;
@property(retain) SSURLBagContext * bagContext;
@property long long contentLength;
@property(retain) NSString * contentType;
@property(retain) NSNumber * authenticatedAccountDSID;
@property(retain) id output;
@property(retain) NSURL * redirectURL;

+ (id)provider;

- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setup;
- (id)output;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (void)setBagContext:(id)arg1;
- (id)bagContext;
- (long long)contentLength;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2;
- (void)resetStream;
- (void)setContentLength:(long long)arg1;
- (void)closeStream;
- (long long)streamedBytes;
- (BOOL)isStream;
- (void)setRedirectURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)redirectURL;
- (id)authenticatedAccountDSID;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (void)configureFromProvider:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;

@end