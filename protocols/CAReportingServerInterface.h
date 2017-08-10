/* Generated by RuntimeBrowser.
 */

@protocol CAReportingServerInterface <NSObject>

@required

- (void)createReportingSession:(long long)arg1;
- (void)destroyReportingSession:(long long)arg1;
- (void)getAllReporters:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getServiceNameForReporterID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, void*
- (void)postAWDMetric:(unsigned int)arg1 withData:(PBCodable *)arg2;
- (void)postSimpleAWDMetric:(unsigned int)arg1;
- (void)reporterID:(void *)arg1 valid:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)sendMessage:(void *)arg1 withCategory:(void *)arg2 andType:(void *)arg3 forReportingIDs:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSDictionary *, unsigned short, unsigned short, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setServiceType:(unsigned short)arg1 reportingSession:(long long)arg2;
- (void)startReportingSessionForID:(long long)arg1;
- (void)stopReportingSessionForID:(long long)arg1;

@end
