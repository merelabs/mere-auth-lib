#ifndef MEREUSERPROFILE_H
#define MEREUSERPROFILE_H

#include "../global.h"
#include "group.h"

namespace Mere
{
namespace Auth
{

class MERE_AUTH_LIBSPEC UserProfile
{
public:
    ~UserProfile();
    UserProfile();
    explicit UserProfile(int uid);

    std::string name() const;
    void setName(const std::string &name);

    std::string home() const;
    void setHome(const std::string &home);

    std::string shell() const;
    void setShell(const std::string &shell);

    std::vector<Group> groups() const;
    void addGroup(const Group group);
    void setGroups(const std::vector<Group> groups);

    std::string icon() const;
    std::string mail() const;

private:
    unsigned int m_uid;
    std::string m_name;
    std::string m_home;
    std::string m_shell;

    std::vector<Group> m_groups;

    std::string m_icon;
    std::string m_mail;
};

}
}

//Q_DECLARE_METATYPE(UserProfile);

#endif // MEREUSERPROFILE_H
