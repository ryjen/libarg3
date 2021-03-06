#ifndef CODA_STRINGS_H
#define CODA_STRINGS_H

#include <string>
#include <vector>

using namespace std;

namespace coda {
  typedef vector<uint8_t> binary;

  // checks if a cstring is null or empty
  bool nullstr(const char *);

  // uppercases the first letter
  string capitalize(const string &);

  int is_number(const string &);

  // true if string is a valid email address
  bool is_valid_email(const string &);

  // ordinal string of an integer. ex. 2 = 2nd, 14 = 14th
  string ordinal_string(int);

  string join(const string &str, size_t count, const string &delimiter = ",");

  string join(const char c, size_t count, const string &delimiter = ",");

  vector<string> split(const string &s, const string &delim = ",",
                       const bool keep_empty = true);

  bool equals(const string &a, const string &b, bool caseSensitive = false);

  bool prefix(const string &a, const string &b, bool caseSensitive = false);

  bool suffix(const string &a, const string &b, bool caseSensitive = false);

  bool contains(const string &a, const string &b, bool caseSensitive = false);

  namespace base64 {
    // reference: http://www.cplusplus.com/forum/beginner/51572/
    std::string encode(unsigned char const *, size_t len);
    std::string encode(const binary &);
    binary decode(const string &s);
  } // namespace base64
  namespace uuid {
    std::string generate();
  }
  time_t datetime(const std::string &s, const std::string &format = "%FT%T%z");

  std::string &ltrim(std::string &s);

  // trim from end
  std::string &rtrim(std::string &s);

  // trim from both ends
  std::string &trim(std::string &s);

  std::string generate_uuid();

  bool dir_exists(const std::string &s);
  bool file_exists(const std::string &s);
} // namespace coda

#endif
